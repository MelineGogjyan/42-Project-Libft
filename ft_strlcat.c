/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 00:15:18 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:33:05 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (size == dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	dst[10] = "Hi";
	char	dst1[10] = "Hi";
	char	dst2[5] = "Hi";
	size_t r = ft_strlcat(dst, "There", 10);
	size_t r1 = ft_strlcat(dst1, "There", 7);
	size_t r2 = ft_strlcat(dst2, "There", 0);
	printf("Result -> %s (%zu) \n", dst, r);
	printf("Result -> %s (%zu) \n", dst1, r1);
	printf("Result -> %s (%zu) \n", dst2, r2);
	return (0);
}*/
