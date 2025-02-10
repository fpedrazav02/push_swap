/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:41:53 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/10 19:44:50 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	(void)b;
	if (!validate_params(argc, argv))
		return (0);
	if (!fill_stack(&a, argv, argc))
	{
		system ("leaks push_swap");
		return (0);
	}

	ft_printf("\n...Constrains passed correctly...✅ \n");

	ft_free_list(a, free);
	system ("leaks push_swap");
	return (0);
}
