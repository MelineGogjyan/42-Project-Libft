#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("g.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
		return (1);
	ft_putchar_fd('a', fd);
	close(fd);
	return (0);
}
*/
