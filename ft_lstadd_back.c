/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:37:45 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/18 19:56:10 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int	main(void)
{
	t_list	*skizb;
	t_list	*mejtex;
	t_list	*verj;
	t_list	*verj_verj;
	t_list	*tmp;
	char	*p1;
	char	*p2;
	char	*p3;
	char	*p4;

	p1 = "Namikaze";
	p2 = "Tsunade";
	p3 = "Hatake";
	p4 = "Uzumaki Naruto";
	skizb = ft_lstnew(p1);
	mejtex = ft_lstnew(p2);
	verj = ft_lstnew(p3);
	verj_verj = ft_lstnew(p4);
	skizb->next = mejtex;
	mejtex->next = verj;
	tmp = skizb;
	ft_lstadd_back(&skizb, verj_verj);
	printf("%s \n", (char *)ft_lstlast(skizb)->content);
	while (tmp)
	{
		printf("%s \n", (char *)tmp->content);
		tmp = tmp->next;
	}
	free(skizb);
	free(mejtex);
	free(verj);
	free(verj_verj);
	return (0);
}
*/
