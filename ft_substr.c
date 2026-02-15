/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoskany <mvoskany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 11:34:40 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/14 12:36:18 by mvoskany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*substr;

	i = 0;
	l = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + l] && l < len)
		l++;
	substr = malloc(l + 1);
	if (!substr)
		return (NULL);
	substr[l] = '\0';
	while (i < l)
	{
		substr[i] = s[start + i];
		i++;
	}
	return (substr);
}
/*
int	main(void)
{
	char	*a;
	char	*c;

	a = ft_substr("hello", 1, 3);
	printf("%s\n", a);
	free(a);
	char *b = ft_substr("hi", 10, 5);
	printf("%s\n", b ? b : "NULL");
	free(b);
	c = ft_substr(NULL, 0, 3);
	printf("%p\n", c);
	return (0);
}
*/
