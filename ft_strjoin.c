/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoskany <mvoskany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:29:01 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/14 13:02:26 by mvoskany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strcan;
	char	*strcan_start;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	strcan = malloc(len + 1);
	if (!strcan)
		return (NULL);
	strcan_start = strcan;
	while (*s1)
	{
		*strcan++ = *s1++;
	}
	while (*s2)
	{
		*strcan++ = *s2++;
	}
	*strcan = '\0';
	return (strcan_start);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*strcan;

	s1 = "Hello ";
	s2 = "world!";
	strcan = ft_strjoin(s1, s2);
	printf("Result s1 -> %s \n", s1);
	printf("Result s2 -> %s \n", s2);
	printf("Result s1 + s2 = strcan -> %s \n", strcan);
	free(strcan);
	return (0);
}
*/
