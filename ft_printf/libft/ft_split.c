/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:32:46 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_strcountwords(char const *str, char c)
{
	int	i;
	int	str_nbr;

	i = 0;
	str_nbr = 1;
	if (!c && !str[0])
		return (1);
	while (str[i] == c)
		i++;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c)
		{
			str_nbr++;
			if (str[i + 1] == '\0' && c != '\0')
				str_nbr--;
		}
		i++;
	}
	return (str_nbr + 1);
}

static char	*ft_memreserv(const char	*str, char c, int *index)
{
	char	*substr;
	int		counter;
	int		aux;
	int		i;

	aux = *index;
	counter = 1;
	i = 0;
	substr = NULL;
	while (str[*index] != '\0')
	{
		if (str[*index] != c && (str[*index + 1] == c || str[*index + 1] == 0))
		{
			substr = (char *)malloc((counter + 1) * sizeof(char));
			if (!substr)
				return (NULL);
			while (aux <= *index)
				substr[i++] = str[aux++];
			substr[i] = '\0';
			break ;
		}
		*index += 1;
		counter++;
	}
	return (substr);
}

static	void	ft_freeall(char	**str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		index;

	array = (char **)malloc((ft_strcountwords(s, c)) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	index = 0;
	while (i < ft_strcountwords(s, c) - 1)
	{
		while (s[index] == c)
			index++;
		array[i] = ft_memreserv(s, c, &index);
		if (!array[i])
			return (ft_freeall(array, i - 1), NULL);
		index++;
		i++;
	}
	array[i] = NULL;
	return (array);
}

/*
int	main()
{
	char *s = "   lorem a   ";
	char **words = ft_split(s, ' ');
	int	i = -1;
	if (words)
	{
		while (words[++i])
			ft_printf("%s\n", words[i]);
	}
}
*/
