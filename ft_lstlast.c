/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:55:15 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/17 19:40:21 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	if (!lst)
		return (NULL);
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
/*
int	main(void)
{
	t_list	*skizb;
	t_list	*mejtex;
	t_list	*verj;
	char	*s1;
	char	*s2;
	char	*s3;
	t_list	*tpich;

	s1 = "Hashirama";
	s2 = "Tobirama";
	s3 = "Sarutobi";
	skizb = ft_lstnew(s1);
	mejtex = ft_lstnew(s2);
	verj = ft_lstnew(s3);
	skizb->next = mejtex;
	printf("%s\n", (char *)mejtex->content);
	mejtex->next = verj;
	tpich = ft_lstlast(skizb);
	printf("Pti tpi verjy -> %s \n", (char *)tpich->content);
	free(skizb);
	free(mejtex);
	free(verj);
	return (0);
}*/
