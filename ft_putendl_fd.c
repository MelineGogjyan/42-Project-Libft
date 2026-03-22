#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int		fd;
	char	*p;

	p = "gsfdywejdfgweukgfweufygwjqeytfguwgeufyguwygefuygwe";
	fd = open("g.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
		return (1);
	ft_putendl_fd(p, fd);
	close(fd);
	return (0);
}
*/