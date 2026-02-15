/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 19:35:07 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/15 15:07:34 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char del)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != del)
		{
			count++;
			while (s[i] != del && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_mem(char **res, size_t i)
{
	while (i > 0)
	{
		free(res[i - 1]);
		i--;
	}
	free(res);
}

static size_t	word_len(char const *s, char c, size_t index)
{
	size_t	w_len;
	size_t	i;
	size_t	current_word;

	current_word = 0;
	w_len = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && current_word < index)
	{
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
		current_word++;
	}
	while (s[i] && s[i] != c)
	{
		w_len++;
		i++;
	}
	return (w_len);
}

char	**ft_split(char const *s, char c)
{
	t_val	v;

	if (!s)
		return (NULL);
	v.w_count = count_words(s, c);
	v.res = malloc((v.w_count + 1) * sizeof(char *));
	if (!v.res)
		return (NULL);
	v.i = 0;
	v.j = 0;
	while (v.i < v.w_count)
	{
		while (s[v.j] == c)
			v.j++;
		v.k = 0;
		v.res[v.i] = malloc(word_len(s, c, v.i) + 1);
		if (!v.res[v.i])
			return (free_mem(v.res, v.i), NULL);
		ft_strlcpy(v.res[v.i], &s[v.j], word_len(s, c, v.i) + 1);
		v.j += word_len(s, c, v.i);
		v.i++;
	}
	v.res[v.w_count] = NULL;
	return (v.res);
}
/*
int	main(void)
{
	char	*s;
	char	**res;
	int		i;

	s = "rerjyfger riguyeh8r7gfe rkjhfeuygr";
	res = ft_split(s, ' ');
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
*/
