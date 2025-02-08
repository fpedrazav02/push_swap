/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:29:51 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 09:29:51 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
#include "../../inc/libft.h"

int	ft_printnbr(int n)
{
	int		len;
	char	*num;

	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}
