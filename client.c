/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgaudin <lgaudin@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 17:55:37 by lgaudin           #+#    #+#             */
/*   Updated: 2024/02/17 12:15:47 by lgaudin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void	convert_and_send(char c)
{

}

int main(int argc, char const *argv[])
{
	int	i;

	i = 0;
	while (argv[2][i] != '\0')
	{
		convert_and_send(argv[2][i]);
		i++;
	}
}

