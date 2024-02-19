/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 11:13:19 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*arw1;
	unsigned char	*arw2;

	i = 0;
	arw1 = (unsigned char *)s1;
	arw2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((i < (n - 1)) && (arw1[i] == arw2[i]))
		i++;
	return (arw1[i] - arw2[i]);
}

/*int	main(void)
{
	char	s1[] = "barcelona y girona";
	char	s2[] = "barcelona y gerona";
	int		n = 30;

	ft_memcmp(s1, s2, n);
	memcmp(s1, s2, n);
	ft_printf("ft_memcmp returned this: %d\n", ft_memcmp(s1, s2, n));
	ft_printf("memcmp returned this: %d\n", memcmp(s1, s2, n));
}*/
