/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:41:53 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/23 17:43:54 by fpedraza         ###   ########.fr       */
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
	if (!validate_params(argc, argv) || argc < 2)
		return (0);
	if (!fill_stack(&a, argv, argc))
		return (0);

	sort(&a, &b);
	ft_free_list(a, free);
	ft_free_list(b, free);
	return (0);
}
