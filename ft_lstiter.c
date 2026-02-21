/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 19:10:13 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/18 19:52:30 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	f(void *str)
{
	printf("%s\n", (char *)str);
}

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	t_list	*skizb;
	t_list	*mejtex;
	t_list	*verj;

	s1 = "Naruto";
	s2 = "Sakura";
	s3 = "Sasuke";
	skizb = ft_lstnew(s1);
	mejtex = ft_lstnew(s2);
	verj = ft_lstnew(s3);
	skizb->next = mejtex;
	mejtex->next = verj;
	ft_lstiter(skizb, f);
}
*/
