/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padre.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:18:29 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/26 16:31:33 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int	main(void)
{
	pid_t	pid;
	int		estado;
	char	*argumen[] = {"./hijo", 0};

	printf("\tSoy %d y soy el padre", getpid());
	pid = fork();

	if (pid == -1)
	{
		perror ("Error en la ejecuacion");
		return (1);
	}
	switch (pid){
	case 0:
		execvp(argumen[0], argumen);
		perror ("Error en la ejecucion del exec");
		return (1);
	default:
		wait(&estado);
		if (!estado)
			printf("\n\tCulmino la ejecucion del proceso hijo\n");
		else
			printf("\n\tError en la ejecucion del proceso hijo\n");
	}
	return (0);
}
