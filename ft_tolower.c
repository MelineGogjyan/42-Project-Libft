#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
#include <stdio.h>

int	main(void)
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
