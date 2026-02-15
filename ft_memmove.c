/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:38:36 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:33:13 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*--d = *--s;
		}
	}
	return (dest);
}
/*
#include <string.h>

int	main(void)
{
	char	str[] = "Hello";
	char	str1[] = "Hashirama";
	char	str2[] = "Hashirama";
	char	dest[10];

	ft_memmove(dest, str, 5);
	printf("Copy dest -> %s \n", dest);
	ft_memmove(str1 + 1, str1, 8);
	memmove(str2 + 1, str2, 8);
	printf("ft_memmove -> %s \n", str1);
	printf("memmove -> %s \n", str2);
	return (0);
}
*/
