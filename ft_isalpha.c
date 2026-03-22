#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c = 'c';
	printf("%d \n", ft_isalpha(c));
	c = 5;
	printf("%d \n", ft_isalpha(c));
	return(0);
}
*/
