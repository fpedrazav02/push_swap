/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:03:49 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/09 20:14:55 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

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

int	ft_lst_append(t_stack	**list, t_stack	*node)
{
	t_stack	*head;

	head = *list;
	if (*list == NULL)
	{
		*list = node;
		return (1);
	}
	while (head->next != NULL)
	{
		if (head->value != node->value)
		{
			head = head->next;
		}
		else
		{
			return (0);
		}
	}
	head->next = node;
	return (1);
}
