/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:00:18 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/13 13:21:06 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

/*
sa swap a: Intercambia los dos primeros elementos del stack a. No hace nada si
hay uno o menos elementos.
*/
void	ft_sa(t_stack **a)
{
	t_stack	*temp;

	if (!*a || !((*a)->next))
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = (*a)->next;
	(*a)->next = temp;

	write(1, "sa\n", 3);
}


/*
pa push a: Toma el primer elemento del stack b y lo pone el primero en el stack
a. No hace nada si b está vacío.
*/
void	ft_pa(t_stack **a, t_stack **b)
{
	t_stack	*temp;

	if (!*b)
		return ;
	temp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = temp;

	write(1, "pa\n", 3);
}


/*
ra rotate a: Desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último
*/
void	ft_ra(t_stack **a)
{
	t_stack	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = ft_stacklast(*a);
	(*a)->next = tmp;
	*a = tmp->next;
	tmp->next = NULL;

	write(1, "ra\n", 3);
}


/*
rra reverse rotate a: Desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.
*/
void	ft_rra(t_stack	**a)
{
	t_stack	*temp;
	t_stack	*prev;

	if (!*a || !(*a)->next)
		return ;

	temp = *a;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	temp->next = *a;
	prev->next = NULL;
	*a = temp;

	write(1, "rra\n", 4);
}
