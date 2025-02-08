/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:34:01 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 09:34:01 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
#include "../../inc/libft.h"

static int	ft_nbrl(uintptr_t nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}

static void	ft_putnbrh(uintptr_t nbr)
{
	if (nbr >= 16)
	{
		ft_putnbrh(nbr / 16);
		ft_putnbrh(nbr % 16);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
			ft_putchar_fd((nbr - 10) + 'a', 1);
	}
}

int	ft_printp(unsigned long long nbr)
{
	int	plen;

	plen = 0;
	plen += write(1, "0x", 2);
	if (nbr == 0)
		plen += write(1, "0", 1);
	else
	{
		ft_putnbrh(nbr);
		plen += ft_nbrl(nbr);
	}
	return (plen);
}
