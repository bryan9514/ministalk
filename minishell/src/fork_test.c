/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:57:12 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/26 16:18:15 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

// int	main(void)
// {
// 	int	estado;
// 	pid_t	pid_wait;

// 	int	num = 10;
// 	pid_t	pid;
// 	pid = fork();
// 	if (pid < 0)
// 	{
// 		perror ("Error al crear nuevo hijo\n");
// 		return (1);
// 	}
// 	if (pid)
// 	{
// 		/*<-- Importante solo espera hasta que termine alguno de los hios
// 		por eso tener cuidado cuando un proceso tiene multiples hijos,
// 		-- no usar sleep usleep o while (1) hay muchos problemas con eso,
// 		wait limpia la memoria y la entrada en la entrada de procesos, evita procesos zombis */
// 		// pid_wait = wait(&estado);


// 		/*es muy similar a wait con la diferencia que el primer parametro es el
// 		proceso a quien se va esperar, y el tercer parametro son constantes que
// 		permiten esperar hasta que ocuran acciones diferentes a una terminacion*/
// 		pid_wait = waitpid(pid, &estado, WUNTRACED | WCONTINUED);


// 		printf("\n\t -- Mi PID es %d, Soy el padre %d\n", getpid(), pid);
// 		printf("\t -- Numero : %d\n", num);
// 		printf("\nestado %i\n", estado);
// 		printf("pid_wait: %d\n", pid_wait);

// 		fflush(stdout);
// 	}
// 	else
// 	{
// 		num = 25;
// 		printf("\n\t ~~Mi PID es %d, Soy el hijo de %d\n", getpid(), getppid());
// 		printf("\t ~~ Numero : %d\n", num);
// 		fflush(stdout);
// 	}
// 	return (0);
// }


int	main(void)
{
	printf("\n\tSoy %d y soy el hijo de %i\n\n", getpid(), getppid());

	int	i =0;
	while (i< 5)
	{
		printf("Hola Padre\n");
		i++;
	}
	printf("\n");
	return (0);
}
