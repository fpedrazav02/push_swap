/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:03:49 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/10 20:43:33 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

t_stack	*fill_stack(t_stack **stack, char **argv, int argc)
{
	char	**args;
	char	**f;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			return (*stack);

		f = args;
		while (*args)
		{
			t_stack *new_node = ft_newnode(*args);
			int check = ft_lst_append(stack, new_node);
			if (check)
				args++;
			else
			{
				free(new_node);
				ft_free_list(*stack, free);
				ft_free_array((void **)f);
				ft_printf("\033[91mError\033[0m\n");
				return (0);
			}
		}

		ft_print_stack(*stack);
		ft_free_array((void **)f);
	}
	else
	{
		ft_printf("More than 2 args were provided\n");
	}

	return (*stack);
}
