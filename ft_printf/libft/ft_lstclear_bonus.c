/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:22:47 by albagar4          #+#    #+#             */
/*   Updated: 2023/05/16 16:34:25 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actual;

	if (!lst || !del)
		return ;
	while ((*lst) != 0)
	{
		del((*lst)->content);
		actual = *lst;
		*lst = actual->next;
		free(actual);
	}
}
