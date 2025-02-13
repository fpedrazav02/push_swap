/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:05:19 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/13 13:22:10 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

/*
sb swap b: Intercambia los dos primeros elementos del stack b. No hace nada si
hay uno o menos elementos.
*/
void	ft_sb(t_stack **b)
{
	t_stack	*temp;

	if (!*b || !((*b)->next))
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = (*b)->next;
	(*b)->next = temp;

	write(1, "sb\n", 3);
}


/*
pb push b: Toma el primer elemento del stack a y lo pone el primero en el stack
b. No hace nada si a está vacío.
*/
void	ft_pb(t_stack **b, t_stack **a)
{
	t_stack	*temp;

	if (!*a)
		return ;
	temp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = temp;

	write(1, "pb\n", 3);
}


/*
rb rotate b: Desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.
*/
void	ft_rb(t_stack **b)
{
	t_stack	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_stacklast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;

	write(1, "rb\n", 3);
}


/*
rrb reverse rotate b: Desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.
*/
void	ft_rrb(t_stack **b)
{
	t_stack	*temp;
	t_stack	*prev;

	if (!*b || !(*b)->next)
		return ;

	temp = *b;
	while (temp->next)
	{
		prev = temp;
		temp = temp->next;
	}
	temp->next = *b;
	prev->next = NULL;
	*b = temp;

	write(1, "rrb\n", 4);
}
