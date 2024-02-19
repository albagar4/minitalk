/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:19:33 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_countdigits(long int n)
{
	int	count;

	count = 1;
	while (n >= 10)
	{
		n = (n / 10);
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	long int		n_copy;

	n_copy = (long int)n;
	if ((long int)n < 0)
		n_copy *= -1;
	i = ft_countdigits(n_copy);
	if ((long int)n < 0)
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = ((n_copy % 10) + '0');
		n_copy = (n_copy / 10);
		i--;
	}
	if ((long int)n < 0)
		str[0] = '-';
	return (str);
}

/*int	main(void)
{
	ft_printf("ft_itoa devuelve para neg: %s\n", ft_itoa(-1234));
	ft_printf("ft_itoa devuelve: %s\n", ft_itoa(1234));
	return (0);
}*/
