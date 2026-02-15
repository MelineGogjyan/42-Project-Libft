/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzumaki <uzumaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 13:04:20 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/15 23:40:16 by uzumaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_start(char const *s1, char const *set)
{
	size_t	j;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (count);
}

static size_t	count_end(char const *s1, char const *set)
{
	size_t	j;
	size_t	count;
	size_t	i;

	count = 0;
	i = ft_strlen(s1);
	while (i > 0)
	{
		i--;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
			{
				count++;
				break ;
			}
			j++;
		}
		if (set[j] == '\0')
			break ;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i;
	t_size	s;

	if (!s1 || !set)
		return (NULL);
	s.len = ft_strlen(s1);
	s.start_count = count_start(s1, set);
	s.end_count = count_end(s1, set);
	if (s.start_count + s.end_count >= s.len)
		s.trimmed_len = 0;
	else
		s.trimmed_len = s.len - (s.start_count + s.end_count);
	trimmed = malloc(s.trimmed_len + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < s.trimmed_len)
	{
		trimmed[i] = s1[s.start_count + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	char	*s1;
	char	*trimmed;
	char	*s2;

	s1 = "  \t \t \n   \n\n\n\t";
	s2 = "";
	trimmed = ft_strtrim(s1, " \n\t");
	if (trimmed)
	{
		printf("Original: '%p'\n", s1);
		printf("Trimmed : '%p'\n", trimmed);
		free(trimmed);
	}
	return (0);
}
*/
