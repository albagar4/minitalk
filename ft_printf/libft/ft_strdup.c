/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 11:41:27 by albagar4          #+#    #+#             */
/*   Updated: 2023/04/27 12:04:53 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*spc;

	i = 0;
	spc = (char *)malloc(ft_strlen(s1) + 1);
	if (!spc)
		return (NULL);
	while (s1[i] != '\0')
	{
		spc[i] = s1[i];
		i++;
	}
	spc[i] = '\0';
	return (spc);
}
