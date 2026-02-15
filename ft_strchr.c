/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 01:05:22 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 19:14:40 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i])
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	else
		return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c1;
	char	c2;

	c1 = 'o';
	c2 = 'o';
	printf("ft_strchr -> %p \nstrchr -> %p \n", ft_strchr("Hello world", c1),
		strchr("Hello world", c2));
	printf("ft_strchr -> %s \nstrchr -> %s \n", ft_strchr("Hello world", c1),
		strchr("Hello world", c2));
	return (0);
}
*/
