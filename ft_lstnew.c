#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void){
	int x = 5;
	int *p = &x;
	t_list *new = ft_lstnew(p);
	printf("%d\n", *(int *)new->content);
	free(new);
}
*/