# Variables
SRC_DIR			=	src/
BUILD_DIR		=	build
INCLUDE_DIR		=	inc
NAME			=	libft.a

# Source Files
FTIS_DIR		=	$(SRC_DIR)ft_is/ft_isalnum.c \
					$(SRC_DIR)ft_is/ft_isalpha.c \
					$(SRC_DIR)ft_is/ft_isascii.c \
					$(SRC_DIR)ft_is/ft_isdigit.c \
					$(SRC_DIR)ft_is/ft_isprint.c

FTMEM_DIR		=	$(SRC_DIR)ft_mem/ft_bzero.c \
					$(SRC_DIR)ft_mem/ft_calloc.c \
					$(SRC_DIR)ft_mem/ft_memchr.c \
					$(SRC_DIR)ft_mem/ft_memcmp.c \
					$(SRC_DIR)ft_mem/ft_memcpy.c \
					$(SRC_DIR)ft_mem/ft_memmove.c \
					$(SRC_DIR)ft_mem/ft_memset.c

FTPUT_DIR		=	$(SRC_DIR)ft_put/ft_putchar_fd.c \
					$(SRC_DIR)ft_put/ft_putendl_fd.c \
					$(SRC_DIR)ft_put/ft_putnbr_fd.c \
					$(SRC_DIR)ft_put/ft_putstr_fd.c

FTTO_DIR		=	$(SRC_DIR)ft_to/ft_atoi.c \
					$(SRC_DIR)ft_to/ft_itoa.c \
					$(SRC_DIR)ft_to/ft_tolower.c \
					$(SRC_DIR)ft_to/ft_toupper.c

FTSTR_DIR		=	$(SRC_DIR)ft_str/ft_split.c \
					$(SRC_DIR)ft_str/ft_strchr.c \
					$(SRC_DIR)ft_str/ft_strdup.c \
					$(SRC_DIR)ft_str/ft_striteri.c \
					$(SRC_DIR)ft_str/ft_strjoin.c \
					$(SRC_DIR)ft_str/ft_strlcat.c \
					$(SRC_DIR)ft_str/ft_strlcpy.c \
					$(SRC_DIR)ft_str/ft_strlen.c \
					$(SRC_DIR)ft_str/ft_strmapi.c \
					$(SRC_DIR)ft_str/ft_strncmp.c \
					$(SRC_DIR)ft_str/ft_strnstr.c \
					$(SRC_DIR)ft_str/ft_strrchr.c \
					$(SRC_DIR)ft_str/ft_strtrim.c \
					$(SRC_DIR)ft_str/ft_substr.c \

FTLST_DIR		=	$(SRC_DIR)ft_lst/ft_lstadd_back.c \
					$(SRC_DIR)ft_lst/ft_lstadd_front.c \
					$(SRC_DIR)ft_lst/ft_lstclear.c \
					$(SRC_DIR)ft_lst/ft_lstdelone.c \
					$(SRC_DIR)ft_lst/ft_lstiter.c \
					$(SRC_DIR)ft_lst/ft_lstlast.c \
					$(SRC_DIR)ft_lst/ft_lstmap.c \
					$(SRC_DIR)ft_lst/ft_lstnew.c \
					$(SRC_DIR)ft_lst/ft_lstsize.c \

FTPRINTF_DIR	=	$(SRC_DIR)ft_printf/ft_hex.c \
					$(SRC_DIR)ft_printf/ft_printchar.c \
					$(SRC_DIR)ft_printf/ft_printf.c \
					$(SRC_DIR)ft_printf/ft_printnbr.c \
					$(SRC_DIR)ft_printf/ft_printp.c \
					$(SRC_DIR)ft_printf/ft_printpercent.c \
					$(SRC_DIR)ft_printf/ft_printstr.c \
					$(SRC_DIR)ft_printf/ft_printunbr.c \

FT_GNL_DIR		=	$(SRC_DIR)get_next_line/get_next_line.c \
# All source files
SRCS 			= $(FTIS_DIR) $(FTMEM_DIR) $(FTPUT_DIR) $(FTTO_DIR) $(FTSTR_DIR) $(FTLST_DIR) $(FTPRINTF_DIR) $(FT_GNL_DIR)
OBJS 			= $(patsubst $(SRC_DIR)%, $(BUILD_DIR)/%, $(SRCS:.c=.o))


CC				=	gcc
CC_FLAGS		=	-Wall -Werror -Wextra -I$(INCLUDE_DIR)
RM_RF			=	rm -rf

# Colors
GREEN			= \033[32m
CYAN			= \033[36m
WHITE			= \033[0m

# Main target
all: $(NAME)

# Create library
$(NAME): $(OBJS)
	@echo "\nCreating library $(CYAN)$(NAME)$(WHITE)...\n"
	@ar rcs $(NAME) $(OBJS)

# Compile .c files to .o files
$(BUILD_DIR)/%.o: $(SRC_DIR)%.c | $(BUILD_DIR)
	@mkdir -p $(dir $@)
	@echo "Compiling: $(CYAN)$<$(WHITE) -> $(CYAN)$@$(WHITE)"
	@$(CC) $(CC_FLAGS) -c $< -o $@

# Create build directory if it doesn't exist
$(BUILD_DIR):
	@mkdir -p $(BUILD_DIR)/ft_is $(BUILD_DIR)/ft_lst $(BUILD_DIR)/ft_mem \
		$(BUILD_DIR)/ft_put $(BUILD_DIR)/ft_str $(BUILD_DIR)/ft_to

# Cleaning rules
clean:
	@$(RM_RF) $(BUILD_DIR)
	@echo " -> [$(GREEN)+$(WHITE)] [$(CYAN)Object files$(WHITE)] cleaned successfully 🗑️"

fclean: clean
	@$(RM_RF) $(NAME)
	@echo " -> [$(GREEN)+$(WHITE)] [$(CYAN)Library$(WHITE)] cleaned successfully 🗑️"

re: fclean all

# Norminette rule
norm:
	@echo "[$(CYAN)Norminette$(WHITE)]"
	@python3 -m norminette $(SRC_DIR) | grep -v "OK\!" || true

.PHONY: all clean fclean re norm
