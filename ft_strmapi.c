/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:43:36 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/15 18:38:01 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

char	foo(unsigned int i, char c)
{
	(void)c;
	if (i % 2 == 0)
		return ('z');
	return ('k');
}
/*
int	main(void)
{
	char	*res;

	res = ft_strmapi("aksfcbyesmruflbtseiruytbe", foo);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/