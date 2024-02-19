/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:37:26 by albagar4          #+#    #+#             */
/*   Updated: 2023/04/27 16:46:51 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*spc;

	spc = (void *)malloc(count * size);
	if (!spc)
		return (NULL);
	ft_bzero(spc, (count * size));
	return (spc);
}

/*Alameda o Perchel a las 9 de la mañana*/