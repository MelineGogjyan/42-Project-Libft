/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 22:29:54 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:32:54 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*str = s;

	while (*str)
	{
		str++;
	}
	return (str - s);
}
/*
int	main(void)
{
	char	myStr[20] = "Hello World";

	printf("%zu\n", ft_strlen(myStr));
	printf("%zu\n", strlen(myStr));
	return (0);
}*/
