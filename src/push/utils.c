/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:40:31 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/08 19:13:15 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

int	is_valid(char *n);

int	validate_params(int argc, char **argv)
{
	char	**i;

	if (argc == 1)
	{
		return (0);
	}

	if (argc > 2)
	{
		if (argv[1] == NULL)
		{
			return (0);
		}
		i = ++argv;
		while (*i)
		{
			if (!is_valid(*i))
			{
				ft_printf("\033[91mError\033[0m\n");
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int	is_valid(char *n)
{
	int	value;

	value = ft_atoi(n);
	if (value == -1 || ((value == 0) && ft_strncmp(n, "0", 1)))
	{
		return (0);
	}
	return (1);
}
