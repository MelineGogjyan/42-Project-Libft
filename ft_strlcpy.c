/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 23:13:46 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:33:02 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	d1[10];
	char	d2[4];
	size_t	r1;
	size_t	r2;

	r1 = ft_strlcpy(d1, "Hello", 10);
	r2 = ft_strlcpy(d2, "Hello", 4);
	printf("Result -> %s (%zu) \n", d1, r1);
	printf("Result -> %s (%zu) \n", d2, r2);
	return (0);
}
*/
