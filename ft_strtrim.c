/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 16:05:01 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/23 16:05:15 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
	{
		return (NULL);
	}
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	return (ft_substr(s1, start, (end - start)));
}
/*
int	main(void)
{
	char	*s1;
	char	*trimmed;
	char	*s2;

	s1 = "  \t dyjdtybs ny ";
	s2 = "";
	trimmed = ft_strtrim(s1, " !u");
	if (trimmed)
	{
		printf("Original: '%s'\n", s1);
		printf("Trimmed : '%s'\n", trimmed);
		free(trimmed);
	}
	return (0);
}
*/
