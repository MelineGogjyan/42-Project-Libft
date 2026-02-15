/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:15:14 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/01/31 19:22:22 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int main()
{
	char	a;

	a = 'A';
	printf("%c \n", ft_tolower(a));

	a = 'Z';
	printf("%c \n", ft_tolower(a));

	a = 'a';
	printf("%c \n", ft_tolower(a));
	return (0);
}
*/
