/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:05:02 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/19 18:11:39 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "ft_printf.h"

void	received_signal(int signal)
{
	unsigned char	bit;

	bit = (unsigned char)signal;
	if (bit == SIGUSR1)
		ft_printf("1");
	else
		ft_printf("0");
	usleep(100);
}

void	convert_and_send(unsigned char c, pid_t target_PID)
{
	int		i;

	i = 7;
	while (i >= 0)
	{
		if ((c & (1 << i)) != 0)
			kill(target_PID, SIGUSR1);
		else
			kill(target_PID, SIGUSR2);
		usleep(1000);
		i--;
	}
	return ;
}

int	main(int argc, char const *argv[])
{
	int	i;
	int	pid;

	i = 0;
	pid = ft_atoi(argv[1]);
	signal(SIGUSR1, received_signal);
	signal(SIGUSR2, received_signal);
	if (argc > 3)
		return (0);
	while (argv[2][i] != '\0')
	{
		convert_and_send(argv[2][i], (pid_t)pid);
		i++;
	}
}
