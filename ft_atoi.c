/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 14:35:34 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/12 19:23:58 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign = -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * res);
}
/*
int	main(void)
{
	char	*c;
	char	*c1;
	char	*c2;
	char	*c3;
	char	*c4;

	c = "123";
	c1 = "-+-+5765";
	c2 = "    34bgvcg";
	c3 = "";
	c4 = "-5425";
	printf("Result c -> %s -> %d \n", c, ft_atoi(c));
	printf("Result c1 -> %s -> %d \n", c1, ft_atoi(c1));
		printf("Result c2 -> %s -> %d \n", c2, ft_atoi(c2));
		printf("Result c3 -> %s -> %d \n", c3, ft_atoi(c3));
	printf("Result c4 -> %s -> %d \n", c4, ft_atoi(c4));
	return (0);
}
*/
