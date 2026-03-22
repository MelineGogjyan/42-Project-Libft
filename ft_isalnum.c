#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'g';
	printf("%d \n", ft_isalnum(c));
	c = '5';
	printf("%d \n", ft_isalnum(c));
	c = '+';
	printf("%d \n", ft_isalnum(c));
	return(0);
}
*/
