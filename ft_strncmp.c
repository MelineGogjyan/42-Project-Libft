/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 14:42:31 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:32:44 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)s1[i] && (unsigned char)s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	printf("ft_strncmp -> %d \nstrncmp -> %d \n", ft_strncmp("ABCD", "ABCD", 3),
		strncmp("ABCD", "ABCD", 3));
	printf("ft_strncmp -> %d \nstrncmp -> %d \n", ft_strncmp("ASDF", "ASDFG",
			5), strncmp("ASDF", "ASDFG", 5));
		printf("ft_strncmp -> %d \nstrncmp -> %d \n", ft_strncmp("ASDFD",
				"ASDF", 5), strncmp("ASDFD", "ASDF", 5));
	return (0);
}*/
