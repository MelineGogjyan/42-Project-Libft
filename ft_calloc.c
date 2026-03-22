#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	d;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	d = nmemb * size;
	ptr = malloc(d);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, d);
	return (ptr);
}
/*
int	main(void)
{
	char	*p;

	p = ft_calloc(10, 5);
	if (p)
	{
		for (int i = 0; i < 10*5; i++)
			printf("%d ", (unsigned char)p[i]);
		free(p);
	}
	return (0);
}
*/
