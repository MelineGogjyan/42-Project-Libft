#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	char a;

	a = 'a';
	printf("%c \n", ft_toupper(a));

	a = 'z';
	printf("%c \n", ft_toupper(a));
	return (0);
}*/
