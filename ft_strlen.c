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
