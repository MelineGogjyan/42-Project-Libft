/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uzumaki <uzumaki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 21:45:26 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/15 23:35:20 by uzumaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	foo(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = *c + 32;
}
/*
int	main(void)
{
	char	res[] = "HELLO WORLD";

	printf("Before -> %s\n", res);
	ft_striteri(res, foo);
	printf("After -> %s\n", res);
	return (0);
}*/
