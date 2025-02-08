/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 09:23:30 by fpedraza          #+#    #+#             */
/*   Updated: 2022/04/03 09:23:30 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"
#include "../../inc/libft.h"

static int	ft_format(va_list list, const char format)
{
	int	plen;

	plen = 0;
	if (format == 'c')
		plen += ft_printchar(va_arg(list, int));
	else if (format == 's')
		plen += ft_printstr(va_arg(list, char *));
	else if (format == 'd' || format == 'i')
		plen += ft_printnbr(va_arg(list, int));
	else if (format == 'u')
		plen += ft_printunbr(va_arg(list, unsigned int));
	else if (format == '%')
		plen += ft_printpercent();
	else if (format == 'p')
		plen += ft_printp(va_arg(list, unsigned long));
	else if (format == 'x' || format == 'X')
		plen += ft_hex(va_arg(list, unsigned int), format);
	return (plen);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
