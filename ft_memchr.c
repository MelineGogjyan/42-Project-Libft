/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 17:39:52 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 19:15:33 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	c1;
	char	c2;

	c1 = 'o';
	c2 = 'o';
	printf("ft_memchr -> %p \nmemchr -> %p \n", ft_memchr("Hello world", c1, 5),
		memchr("Hello world", c2, 5));
	printf("ft_memchr -> %s \nmemchr -> %s \n", ft_memchr("Hello world", c1,
			10), memchr("Hello world", c2, 10));
	return (0);
}
*/