/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:54:47 by albagar4          #+#    #+#             */
/*   Updated: 2023/06/20 17:17:03 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		ft_print_str("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		ft_print_char('-');
		count++;
		n = -n;
	}
	if (n >= 10)
		count += ft_print_nbr(n / 10);
	ft_print_char(n % 10 + '0');
	count++;
	return (count);
}
