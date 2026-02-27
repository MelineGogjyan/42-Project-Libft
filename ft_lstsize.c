/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgogjyan <mgogjyan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 16:15:11 by mvoskany          #+#    #+#             */
/*   Updated: 2026/02/26 18:44:00 by mgogjyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list	*skizb;
	t_list	*tmp;
	int		i;
	int		value;
	int		*p;

	skizb = NULL;
	i = 0;
	tmp = skizb;
	while (i < 10)
	{
		value = i;
		p = &value;
		tmp = ft_lstnew(p);
		ft_lstadd_front(&skizb, tmp);
		i++;
	}
	printf("%d\n", ft_lstsize(skizb));
}
*/
