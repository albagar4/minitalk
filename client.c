/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagar4 <albagar4@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:55:37 by lgaudin           #+#    #+#             */
/*   Updated: 2024/02/19 18:18:26 by albagar4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include "ft_printf.h"

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
		usleep(500);
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
	if (argc > 3)
		return (0);
	while (argv[2][i] != '\0')
	{
		convert_and_send(argv[2][i], (pid_t)pid);
		i++;
	}
}
