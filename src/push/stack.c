/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:03:49 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/10 19:27:56 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"


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
