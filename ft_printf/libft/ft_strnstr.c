/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:08:57 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && (i + j) < len)
		{
			if (needle[j] == haystack[i + j])
				j++;
			else
				break ;
		}
		if (needle[j] == '\0')
			return ((char *)&(haystack[i]));
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	hk[] = "bonjour";
	char	ne[] = "our";
	size_t	len = 9;

	ft_strnstr(hk, ne, len);
	strnstr(hk, ne, len);
	ft_printf("ft_strnstr found %s here: %p\n", ne, ft_strnstr(hk, ne, len));
	ft_printf("strnstr found %s here: %p\n", ne, strnstr(hk, ne, len));
}*/
