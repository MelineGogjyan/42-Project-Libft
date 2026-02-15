/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 20:09:05 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/07 18:33:25 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	i;
	char	c;

	i = 'd';
	c = '5';
	printf("%d \n", ft_isdigit(i));
	printf("%d \n", ft_isdigit(c));
	return(0);
}
*/
