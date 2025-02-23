/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 17:19:56 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/23 17:58:28 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

// Encuentra el índice del elemento mínimo en la pila.
int	find_min_index(t_stack *a)
{
	int		min;
	int		index;
	int		min_index;
	t_stack	*tmp;

	if (!a)
		return (-1);
	min = a->value;
	min_index = 0;
	index = 0;
	tmp = a;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			min_index = index;
		}
		index++;
		tmp = tmp->next;
	}
	return (min_index);
}

/*
 * Ordena 3 elementos en la pila A.
 * Se asume que existen al menos 3 nodos en A.
 */
void	sort_three(t_stack **a)
{
	int	first;
	int	second;
	int	third;

	if (!a || !*a || !((*a)->next) || !((*a)->next->next))
		return ;
	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;

	if (first < second && second < third)
		return ;
	if (first > second && second < third && first < third)
		ft_sa(a);
	else if (first > second && second > third)
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (first > second && second < third && first > third)
		ft_ra(a);
	else if (first < second && second > third && first < third)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (first < second && second > third && first > third)
		ft_rra(a);
}

/*
 * Ordena 5 elementos.
 * La estrategia es: extraer (mediante ft_pb) los dos elementos mínimos a la pila B,
 * ordenar los 3 elementos restantes en A con sort_three, y luego reintegrar los
 * elementos de B en A.
 */
void	sort_five(t_stack **a, t_stack **b)
{
	int	min_index;
	int	len;

	while (ft_list_lenght(*a) > 3)
	{
		min_index = find_min_index(*a);
		len = ft_list_lenght(*a);
		if (min_index <= len / 2)
		{
			while (min_index-- > 0)
				ft_ra(a);
		}
		else
		{
			while (min_index++ < len)
				ft_rra(a);
		}
		ft_pb(b, a);
	}
	sort_three(a);
	while (*b)
		ft_pa(a, b);
}

void	sort_big(t_stack **a, t_stack **b)
{
	(void)a;
	(void)b;
	return ;
}

void	sort(t_stack **a, t_stack **b)
{
	int	len;

	len = ft_list_lenght(*a);
	if (len <= 1)
		return ;
	else if (len == 2)
	{
		if ((*a)->value > (*a)->next->value)
			ft_sa(a);
	}
	else if (len == 3)
		sort_three(a);
	else if (len == 5)
		sort_five(a, b);
	else
		sort_big(a, b);
}
