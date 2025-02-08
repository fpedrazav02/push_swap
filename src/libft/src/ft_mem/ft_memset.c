/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedraza <fpedraza@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:45:16 by fpedraza          #+#    #+#             */
/*   Updated: 2025/02/07 12:09:36 by fpedraza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		((unsigned char *)s)[i++] = (unsigned char)c;
	return (s);
}

// int main ()
// {
// 	char str[]="HOLASSSSS";
// 	printf("%s",ft_memset(str, '$', 4));

// 	return (0);
// }
