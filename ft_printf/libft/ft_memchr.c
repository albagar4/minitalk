/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:30:18 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*arw;

	i = 0;
	arw = (unsigned char *)s;
	while (i < n)
	{
		if (arw[i] == (unsigned char)c)
			return (&(arw[i]));
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "ensalada de espárragos";
	int		c = 'd';
	size_t	n = 10;

	ft_memchr(s, c, n);
	memchr(s, c, n);
	ft_printf("ft_memchr found %c here: %p\n", c, ft_memchr(s, c, n));
	ft_printf("memchr found %c here: %p\n", c, memchr(s, c, n));
}*/
