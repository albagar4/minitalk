/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:34:08 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/15 13:42:14 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(char *format, int i, va_list args)
{
	int	c;

	c = 0;
	if (format[i] == 'c')
		c = ft_print_char(va_arg(args, int));
	else if (format[i] == 's')
		c = ft_print_str(va_arg(args, char *));
	else if (format[i] == 'p')
		c = ft_print_ptr(va_arg(args, unsigned long long));
	else if (format[i] == 'd' || format[i] == 'i')
		c = ft_print_nbr(va_arg(args, int));
	else if (format[i] == 'u')
		c = ft_print_unsigned(va_arg(args, unsigned int));
	else if (format[i] == '%')
		c = ft_print_char('%');
	else if (format[i] == 'x')
		c = ft_print_hex_lower(va_arg(args, unsigned int));
	else if (format[i] == 'X')
		c = ft_print_hex_upper(va_arg(args, unsigned int));
	return (c);
}

int	ft_printf(char *format, ...)
{
	va_list		args;
	int			i;
	int			count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
		}
		else
		{
			i++;
			count += ft_parser(format, i, args);
		}
		i++;
	}
	return (count);
}

/* int	main(void)
{
	int	*a;
	int	b;

	b = 6;
	a = &b;
	ft_printf("has impreso %i carac: ", ft_printf("%i\n", 47296));
	return (0);
} */
