/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:40:18 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/13 13:37:38 by fpedraza         ###   ########.fr       */
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
int		ft_lst_append(t_stack	**list, t_stack	*node);
void	ft_print_stack(t_stack	*head);
t_stack	*fill_stack(t_stack **stack, char **argv, int argc);
t_stack	*ft_newnode(char	*value);
t_stack	*ft_stacklast(t_stack *root);

// Operations for Stack A
void	ft_sa(t_stack **a);
void	ft_pa(t_stack **a, t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rra(t_stack **a);
// Operations for Stack B
void	ft_sb(t_stack **b);
void	ft_pb(t_stack **b, t_stack **a);
void	ft_rb(t_stack **b);
void	ft_rrb(t_stack **b);
// Combined Operations
void	ft_ss(t_stack **a, t_stack **b);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);

//Prototypes for algorithm

//Operations

#endif
