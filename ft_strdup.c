#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*res;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	*ptr;
	char	*copy;

	ptr = "Hello";
	copy = ft_strdup(ptr);
	printf("Result ptr -> %s \n", ptr);
	printf("Result copy -> %s \n", copy);
	return (0);
}
*/
