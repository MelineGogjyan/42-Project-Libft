#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
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
	ft_putstr_fd(p, fd);
	close(fd);
	return (0);
}
*/
