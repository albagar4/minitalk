/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:48:14 by albagar4          #+#    #+#             */
/*   Updated: 2023/06/20 16:45:02 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned long long nbr)
{
	char	*base;
	int		count;

	base = "0123456789ABCDEF";
	count = 0;
	if (nbr < 0)
		return (0);
	else if (nbr >= 0 && nbr <= 15)
		count += ft_print_char(base[nbr]);
	else
	{
		count += ft_print_hex_upper(nbr / 16);
		count += ft_print_char(base[nbr % 16]);
	}
	return (count);
}
