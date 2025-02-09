/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:03:49 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/09 20:09:30 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

t_stack	*fill_stack(t_stack *stack, char **argv, int argc)
{
	char	**args;
	char	**f;

	if (argc == 2)
	{

		args = ft_split(argv[1], ' ');
		f = args;
		if (args == NULL)
		{
			return (stack);
		}
		while (*args)
		{
			ft_printf("Number: [%s]\n", *args);
			args++;
		}
		ft_free_array((void **)f);
	}
	else
	{
		ft_printf("More than 2 args where provided\n");
	}

	return (stack);
}
