/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:17:31 by albagar4          #+#    #+#             */
/*   Updated: 2023/04/25 13:16:57 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*arw;

	i = 0;
	arw = (unsigned char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		arw[i] = '\0';
		i++;
	}
}
