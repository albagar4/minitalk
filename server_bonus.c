/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:04:58 by albagar4          #+#    #+#             */
/*   Updated: 2024/02/19 18:05:35 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "ft_printf.h"

void	bit_process(int signal, siginfo_t *info, void *context)
{
	static unsigned char	result;
	static int				count = 0;

	(void)context;
	if (signal == SIGUSR1)
	{
		result = result | 1;
		kill(info->si_pid, SIGUSR1);
	}
	else if (signal == SIGUSR2)
	{
		result = result | 0;
		kill(info->si_pid, SIGUSR2);
	}
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
	struct sigaction	sa;

	sa.sa_sigaction = &bit_process;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	ft_printf("%i\n", getpid());
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
