/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:42:55 by albagar4          #+#    #+#             */
/*   Updated: 2023/04/25 16:07:51 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*arr_dst;
	unsigned char	*arr_src;

	if (dst == NULL && src == NULL)
		return (0);
	i = 0;
	arr_dst = (unsigned char *)dst;
	arr_src = (unsigned char *)src;
	if (arr_src >= arr_dst)
	{
		while (i < len)
		{
			arr_dst[i] = arr_src[i];
			i++;
		}
	}
	else
	{
		while (len-- != 0)
			arr_dst[len] = arr_src[len];
	}
	return (dst);
}
