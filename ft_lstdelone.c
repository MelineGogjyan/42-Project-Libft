/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:03:14 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/18 19:52:28 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
void	del(void *s)
{
	free(s);
}
int	main(void)
{
	char	*s1;
	char	*s2;
	t_list	*head;
	t_list	*node;

	s1 = ft_strdup("olaa");
	s2 = ft_strdup("amigosssss");
	head = ft_lstnew(s1);
	node = ft_lstnew(s2);
	ft_lstadd_back(&head, node);
	head->next = NULL;
	ft_lstdelone(node, del);
	if (ft_lstlast(head) == head)
		printf("yeeee");
	return (0);
}
*/