/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:33:38 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	while (pos >= 0)
	{
		if ((char)s[pos] == (char)c)
			return ((char *)&(s[pos]));
		pos--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "argent dans les sentiments";
	int	c = 'z';

	ft_strrchr(s, c);
	strrchr(s, c);
	ft_printf("ft_strrchr found %c here: %p\n", c, ft_strrchr(s, c));
	ft_printf("strrchr found %c here: %p\n", c, strrchr(s, c));
}*/
