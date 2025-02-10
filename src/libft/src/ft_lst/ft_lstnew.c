/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 21:25:07 by fpedraza          #+#    #+#             */
/*   Updated: 2022/03/29 21:25:07 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_list	*ft_lstnew(void *value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

/*
Parameters value: The value to create the node with.
Return value The new node
External functs. malloc
Description Allocates (with malloc(3)) and returns a new node.
The member variable ’value’ is initialized with
the value of the parameter ’value’. The variable
’next’ is initialized to NULL.

*/
