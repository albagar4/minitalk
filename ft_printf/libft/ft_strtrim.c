/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:42:44 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_strlenstart(char const *global, char const *erased)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (global[i] != '\0')
	{
		while (erased[j] != '\0')
		{
			if (global[i] == erased[j])
			{
				i++;
				break ;
			}
			j++;
		}
		if (j == (int)ft_strlen((char *)erased))
			return (i);
		j = 0;
	}
	return (0);
}

static int	ft_strlenend(char const *global, char const *erased)
{
	int	i;
	int	j;

	i = ft_strlen(global);
	j = 0;
	while (i > 0)
	{
		while (erased[j] != '\0')
		{
			if (global[i - 1] == erased[j])
			{
				i--;
				break ;
			}
			j++;
		}
		if (j == (int)ft_strlen((char *)erased))
			return (i);
		j = 0;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i_str;
	int		i_end;
	int		a;
	char	*spc;

	i_str = ft_strlenstart(s1, set);
	i_end = ft_strlenend(s1, set);
	spc = (char *)malloc((i_end - i_str + 1) * sizeof(char));
	if (!spc)
		return (NULL);
	a = 0;
	while (i_str < i_end)
	{
		spc[a] = s1[i_str];
		a++;
		i_str++;
	}
	spc[a] = '\0';
	return (spc);
}

/*int	main(void)
{
	char	s1[] = ".-.--.-.-.-.-.--.putain-.-.-.-.-.-.-";
	char	set[] = ".-";

	ft_printf("La función ft_strtrim devuelve: %s", ft_strtrim(s1, set));
	return (0);
}*/
