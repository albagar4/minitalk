/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 16:08:33 by albagar4          #+#    #+#             */
/*   Updated: 2023/06/20 16:35:51 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 0 && nbr <= 9)
		count += ft_print_char(nbr % 10 + '0');
	if (nbr > 9)
	{
		count += ft_print_unsigned(nbr / 10);
		count += ft_print_char(nbr % 10 + '0');
	}
	return (count);
}
