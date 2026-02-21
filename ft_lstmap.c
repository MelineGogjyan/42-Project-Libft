/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:38:21 by mgogjyan          #+#    #+#             */
/*   Updated: 2026/02/19 18:20:31 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	del(void *s)
{
	free(s);
}

void	*f(void *c)
{
	char	*s;
	size_t	i;

	if (!c)
		return (NULL);
	s = ft_strdup((char *)c);
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (i % 2 == 0)
			s[i] = 'z';
		else
			s[i] = 'k';
		i++;
	}
	return ((void *)s);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	t_list	*skizb;
	t_list	*mejtex;
	t_list	*verj;
	t_list	*popoxakan;
	t_list	*tmp;
	t_list	*next;

	s1 = "Kakashi";
	s2 = "Obito";
	s3 = "Rin";
	skizb = ft_lstnew(s1);
	mejtex = ft_lstnew(s2);
	verj = ft_lstnew(s3);
	skizb->next = mejtex;
	mejtex->next = verj;
	popoxakan = ft_lstmap(skizb, f, del);
	tmp = popoxakan;
	while (popoxakan)
	{
		printf("%s\n", (char *)popoxakan->content);
		popoxakan = popoxakan->next;
	}
	while (tmp)
	{
		next = tmp->next;
		free(tmp->content);
		free(tmp);
		tmp = next;
	}
}
*/
