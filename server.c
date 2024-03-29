/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:55:25 by lgaudin           #+#    #+#             */
/*   Updated: 2024/02/19 16:59:34 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "ft_printf.h"

void	bit_process(int signal)
{
	static unsigned char	result;
	static int				count = 0;

	if (signal == SIGUSR1)
		result = result | 1;
	else if (signal == SIGUSR2)
		result = result | 0;
	count++;
	if (count == 8)
	{
		ft_printf("%c", result);
		count = 0;
		result = 0;
	}
	else
		result = result << 1;
}

int	main(void)
{
	ft_printf("%i\n", getpid());
	signal(SIGUSR1, bit_process);
	signal(SIGUSR2, bit_process);
	while (1)
		pause();
	return (0);
}
