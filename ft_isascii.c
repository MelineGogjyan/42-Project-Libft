#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = '5';
	printf("%d \n", ft_isascii(c));
	printf("%d \n", ft_isascii(-1));
	return(0);
}
*/
