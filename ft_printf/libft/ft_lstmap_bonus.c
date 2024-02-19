/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:43:10 by albagar4          #+#    #+#             */
/*   Updated: 2023/11/23 19:19:43 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*actual;

	if (!lst)
		return (NULL);
	map = NULL;
	while (lst)
	{
		actual = ft_lstnew(f(lst->content));
		if (actual)
		{
			ft_lstadd_back(&map, actual);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
	}
	return (map);
}
