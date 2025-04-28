/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:17:46 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/28 14:26:26 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CELL_H
# define CELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

# define BLACK	"\033[0;30m"
# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define YELLOW	"\033[0;33m"
# define BLUE	"\033[0;34m"
# define PURPLE	"\033[0;35m"
# define CYAN	"\033[0;36m"
# define WHITE	"\033[0;37m"
# define RST	"\033[0m"

# define MYBUFSIZ 1024

# define DEL " \f\n\r\t\v"

typedef struct s_builtin
{
	const char	*builtin_name;
	void	(*foo)(char **);

}	t_builtin;

# define p(...) printf(__VA_ARGS__)

void	printbanner(void);
void	ft_exit(char **args);
void	ft_exce(char **args);
char	**split_line(char *line);
void	*ft_realloc(void *ptr, size_t size);

#endif
