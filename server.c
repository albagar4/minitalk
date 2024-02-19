/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:55:25 by lgaudin           #+#    #+#             */
/*   Updated: 2024/02/17 12:03:38 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void	bit_process(int signal)
{
	static unsigned char	result;
	unsigned char			received;
	static int				count = 0;

	if (signal == SIGUSR1)
		result = result | 1;
	else if (signal == SIGUSR2)
		result = result | 0;
	count++;
	if (count == 8)
	{
		printf("%c", result);
		count = 0;
		result = 0;
	}
	else
		result = result << 1;
}

int main(void)
{
	printf("%i\n", getpid());
	signal(SIGUSR1, bit_process);
	signal(SIGUSR2, bit_process);
	while (1)
		pause();
	return (0);
}
