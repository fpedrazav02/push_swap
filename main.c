/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:41:53 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/09 19:24:46 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	(void)a;
	(void)b;
	if (!validate_params(argc, argv))
	{
		return (0);
	}
	//Fill stack A;
	fill_stack(a, argv, argc);

	ft_printf("\n...Constrains passed correctly...✅ \n");
	system ("leaks push_swap");
	return (0);
}
