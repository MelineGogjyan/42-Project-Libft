/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 19:16:39 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/14 20:57:53 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	myStr1[] = "Hello world";
	char	myStr2[] = "Hello";
	int		cmp;
	int		cmp1;

	cmp = memcmp(myStr1, myStr2, 5);
	cmp1 = ft_memcmp(myStr1, myStr2, 5);
	printf("memcmp -> %d \n", cmp);
	printf("ft_memcmp -> %d \n", cmp1);
	return (0);
}
*/
