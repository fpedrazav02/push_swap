/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:30:16 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/10 17:30:57 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_free_list(void *head, void	(*free_node)(void	*))
{
	t_list	*current;
	t_list	*next;

	current	= (t_list	*)head;
	while (current)
	{
		next = current->next;

		if (free_node)
		{
			free_node(current);
		}
		else
		{
			free(current);

		}
		current = next;
	}
}
