/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:18:04 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 09:18:04 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
#include "../../inc/libft.h"

static int	ft_hexlen(unsigned int nbr)
{
	int	len;

	len = 0;
	while (nbr != 0)
	{
		len++;
		nbr /= 16;
	}
	return (len);
}

static void	ft_phex(unsigned int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_phex(nbr / 16, format);
		ft_phex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar_fd((nbr + '0'), 1);
		else
		{
			if (format == 'x')
			{
				ft_putchar_fd((nbr - 10) + 'a', 1);
			}
			if (format == 'X')
			{
				ft_putchar_fd((nbr - 10) + 'A', 1);
			}
		}
	}
}

int	ft_hex(unsigned int nbr, const char format)
{
	int	plen;

	plen = ft_hexlen(nbr);
	if (nbr == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	else
	{
		ft_phex(nbr, format);
	}
	return (plen);
}
