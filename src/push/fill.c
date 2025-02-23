/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:03:49 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/23 17:18:18 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

int	append_args_to_list(t_stack **stack, char **args);

t_stack	*fill_stack(t_stack **stack, char **argv, int argc)
{
	char	**args;
	char	**farray;
	int		check;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!args)
			return (*stack);
		farray = args;
		check = append_args_to_list(stack, args);
		if (!check)
		{
			ft_free_array((void **)farray);
			return (0);
		}
		ft_free_array((void **)farray);
	}
	else
	{
		args = ++argv;
		check = append_args_to_list(stack, args);
		if (!check)
			return (0);
	}

	return (*stack);
}

int	append_args_to_list(t_stack **stack, char **args)
{
	t_stack	*new_node;
	int		check;

	while (*args)
	{
		new_node = ft_newnode(*args);
		check = ft_lst_append(stack, new_node);
		if (check)
			args++;
		else
		{
			free(new_node);
			ft_free_list(*stack, free);
			ft_printf("\033[91mError\033[0m\n");
			return (0);
		}
	}

	return (1);
}
