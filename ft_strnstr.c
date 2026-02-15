/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:10:22 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/12 19:33:25 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (little[j] && big[i + j] && (i + j) < len
			&& big[i + j] == little[j])
		{
			j++;
		}
		if (!little[j])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*big;
	char	*little;

	big = "Hello world";
	little = "world";
	printf("%p \n", ft_strnstr(big, little, 11));
	printf("%p \n", ft_strnstr(big, little, 11));
	return (0);
}
*/
