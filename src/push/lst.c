/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:03:49 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/23 17:18:14 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

int	ft_list_lenght(t_stack	*head)
{
	int	i;

	i = 0;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return (i);
}

t_stack	*ft_newnode(char	*value)
{
	t_stack	*node;
	int		n;

	node = (t_stack *)malloc(sizeof(t_stack));
	n = ft_atoi(value);
	node->value = n;
	node->next = NULL;
	return (node);
}

int	ft_lst_append(t_stack **list, t_stack *node)
{
	t_stack	*head;

	if (!list || !node)
		return (0);
	if (*list == NULL)
	{
		*list = node;
		return (1);
	}
	head = *list;
	while (head->next != NULL)
	{
		if (head->value == node->value)
			return (0);
		head = head->next;
	}
	if (head->value == node->value)
		return (0);
	head->next = node;
	return (1);
}

void	ft_print_stack(t_stack	*head)
{
	t_stack	*current;
	int		i;

	current = head;
	i = 0;
	ft_printf("\n _____________LIST PRINT TRACE____________\n");
	while (current)
	{
		ft_printf("\n%i", current->value);
		current = current->next;
		i++;
	}
	ft_printf("\n List has (%i) nodes.", i);
	ft_printf("\n _____________LIST PRINT END____________\n");
}

t_stack	*ft_stacklast(t_stack *root)
{
	if (root == NULL)
		return (NULL);
	while (root != NULL)
	{
		if (root->next == NULL)
			return (root);
		root = root->next;
	}
	return (root);
}
