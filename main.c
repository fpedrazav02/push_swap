/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:41:53 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/08 18:55:52 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/push_swap.h"

int	main(int argc, char **argv)
{

	if (!validate_params(argc, argv))
	{
		return (0);
	}



	ft_printf("constrains passed correctly...! \n");
	return (0);
}
