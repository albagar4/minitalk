/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:54:31 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	both;

	i = 0;
	j = 0;
	both = ft_strlen(dst) + ft_strlen(src);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (both);
}

/*int	main(void)
{
	char	dst[50] = "hola que tal";
	char	dst_2[50] = "hola que tal";
	char	src[20] = "mario";
	int		size = 5;

	int r = strlcat(dst, src, size);
	int r_f = ft_strlcat(dst_2, src, size);
	ft_printf("Original: %s -> %i\n", dst, r);
	ft_printf("Fake: %s -> %i\n", dst_2, r_f);
	return (0);
}*/
