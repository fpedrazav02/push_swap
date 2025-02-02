# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/02 19:42:34 by fpedraza          #+#    #+#              #
#    Updated: 2025/02/02 19:54:26 by fpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# * Variables
SRCS			=	main.c
OBJS_DIR		=	obj
OBJS 			=	$(addprefix $(OBJS_DIR)/, $(SRCS:.c=.o))
BIN_DIR			=	bin
BIN				=	$(addprefix $(BIN_DIR)/, "push_swap")
BINARIES		= 	$(BIN)

CC 				=	cc
CC_FLAGS 		= 	-Wall -Werror -Wextra
RM_RF 			= 	rm -rf
NAME 			=	push_swap

# Libft
LIBFT_DIR		=	src/libft
LIBFT 			=	$(LIBFT_DIR)/libft.a

# Colors
GREEN			= \033[1;32m
CYAN			= \033[36m
WHITE			= \033[0m
PURPLE			= \033[1;35m

# Main rule
all: $(NAME)

$(NAME): $(LIBFT) MSG $(OBJS)
				@mkdir -p $(BIN_DIR)
				@echo "\nBuilding [$(GREEN)$(NAME)$(WHITE)]\n"
				@$(CC) $(CC_FLAGS) $(LIBFT) -o $(BINARIES) $(OBJS)
				@echo "\n... ✅ Everything compiled successfully ✅ ...\n"

MSG:
				@echo "\nCompiling [$(GREEN)$(NAME)$(WHITE)]"

# Build libft
$(LIBFT):
				@echo "\nCompiling [$(GREEN)libft$(WHITE)]"
				@$(MAKE) -C $(LIBFT_DIR) || exit 1

# [GENERIC] Compile all .c files into .o files
$(OBJS_DIR)/%.o: %.c
				@mkdir -p $(OBJS_DIR)
				@echo "Compiling object $< -> [$(CYAN)$@$(WHITE)]"
				@$(CC) $(CC_FLAGS) -c $< -o $@

#! Other Rules
start:
				@./bin/push_swap

libft_clean:
				@$(MAKE) -C $(LIBFT_DIR) fclean

clean:			libft_clean
				@$(RM_RF) $(OBJS_DIR)
				@echo " -> [$(GREEN)+$(WHITE)] [$(CYAN)Minitalk objects$(WHITE)] [$(GREEN)+$(WHITE)] cleaned successfully 🗑️"

fclean:			clean
				@$(RM_RF) $(BIN_DIR)
				@echo " -> [$(GREEN)+$(WHITE)] [$(CYAN)Minitalk binaries$(WHITE)] [$(GREEN)+$(WHITE)] cleaned successfully 🗑️"

re:				fclean $(NAME)

# Compile libft rule
libft: $(LIBFT)

.PHONY:			all clean fclean re MSG start
