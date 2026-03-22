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
