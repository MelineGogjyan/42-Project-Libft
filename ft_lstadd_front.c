/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:37:35 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/26 18:44:11 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void){
	int x = 7;
	int y = 8;
	int *p1 = &x;
	int *p2 = &y;

	t_list *head = ft_lstnew(p2);
	t_list *node = ft_lstnew(p1);
	head->next = node;
	t_list *newhead = ft_lstnew(p1);
	t_list **skizb = &head;
	ft_lstadd_front(skizb, newhead);
	printf("%d\n", *(int *)((*skizb)->content));

	free(node);
	free(newhead);
}
*/