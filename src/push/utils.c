/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 16:40:31 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/12 20:05:31 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include "../../inc/push_swap.h"

int		is_valid(char *n);
void	handle_error(void **array, int is_split_allocated);
int		validate_numbers(char **numbers);

int	validate_params(int argc, char **argv)
{
	char	**numbers;
	int		is_split_allocated;

	if (argc < 2)
		return (0);

	is_split_allocated = 0;
	if (argc == 2)
	{
		numbers = ft_split(argv[1], ' ');
		is_split_allocated = 1;
	}
	else
		numbers = argv + 1;

	if (!validate_numbers(numbers))
	{
		handle_error((void **)numbers, is_split_allocated);
		return (0);
	}

	if (is_split_allocated)
		ft_free_array((void **)numbers);

	return (1);
}

int	validate_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		if (!is_valid(numbers[i]))
			return (0);
		i++;
	}
	return (1);
}


void	handle_error(void **array, int is_split_allocated)
{
	ft_printf("\033[91mError\033[0m\n");
	if (is_split_allocated)
		ft_free_array(array);
}

int	is_valid(char *n)
{
	int	i;

	i = 0;
	if (!n || !*n)
		return (0);

	if (n[i] == '-' || n[i] == '+')
		i++;

	while (n[i])
	{
		if (!ft_isdigit(n[i]))
			return (0);
		i++;
	}
	return (1);
}

