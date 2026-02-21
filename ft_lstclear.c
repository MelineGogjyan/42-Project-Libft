/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:34:39 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/18 19:52:23 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
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
	char	*s3;
	t_list	*skizb;
	t_list	*mejtex;
	t_list	*verj;
	t_list	**skizb_mejtex_verj;

	s1 = ft_strdup("Itachi");
	s2 = ft_strdup("Kushina");
	s3 = ft_strdup("Hinata");
	skizb = ft_lstnew(s1);
	mejtex = ft_lstnew(s2);
	verj = ft_lstnew(s3);
	skizb->next = mejtex;
	mejtex->next = verj;
	skizb_mejtex_verj = &skizb;
	ft_lstclear(skizb_mejtex_verj, del);
	if (!*skizb_mejtex_verj)
		printf("lava sha lava");
}
*/
