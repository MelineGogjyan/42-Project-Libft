/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 19:04:52 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:32:50 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c && i > 0)
		i--;
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
	printf("ft_strrch -> %p \nstrrch -> %p \n", ft_strrchr("Hello world", c1),
		strrchr("Hello world", c2));
	printf("ft_strrch -> %s \nstrrch -> %s \n", ft_strrchr("Hello world", c1),
		strrchr("Hello world", c2));
	return (0);
}
*/
