/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:29:39 by albagar4          #+#    #+#             */
/*   Updated: 2023/04/25 13:18:12 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*arw_dst;
	unsigned char	*arw_src;

	if (!dst && !src)
		return (0);
	i = 0;
	arw_dst = (unsigned char *)dst;
	arw_src = (unsigned char *)src;
	while (i < n)
	{
		arw_dst[i] = (unsigned char)arw_src[i];
		i++;
	}
	return (dst);
}
