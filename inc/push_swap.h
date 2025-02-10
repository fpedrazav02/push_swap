/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:40:18 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/10 17:30:14 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

// * Own libs
# include "../src/libft/inc/ft_printf.h"
# include "../src/libft/inc/libft.h"
# include "../src/libft/inc/get_next_line.h"

// * Stack definition
typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

//Prototypes for helpers
int		validate_params(int argc, char **argv);
t_stack	*fill_stack(t_stack *stack, char **argv, int argc);
t_stack	*ft_newnode(char	*value);
int		ft_lst_append(t_stack	**list, t_stack	*node);
#endif
