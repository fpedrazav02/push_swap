/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_both.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:05:15 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/13 13:35:04 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

/*
ss: sa y sb al mismo tiempo.
*/
void	ft_ss(t_stack **a, t_stack **b)
{
	ft_sa(a);
	ft_sb(b);
	write(1, "ss\n", 3);
}


/*
rr: ra y rb al mismo tiempo.
*/
void	ft_rr(t_stack **a, t_stack **b)
{
	ft_ra(a);
	ft_rb(b);
	write(1, "rr\n", 3);
}


/*
rrr: rra y rrb al mismo tiempo.
*/
void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rra(a);
	ft_rrb(b);
	write(1, "rrr\n", 4);
}
