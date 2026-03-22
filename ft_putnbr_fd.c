#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
	return ;
}
/*
int	main(void)
{
	int	fd;
	int	n;

	n = 23456;
	fd = open("g.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
		return (1);
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}
*/
