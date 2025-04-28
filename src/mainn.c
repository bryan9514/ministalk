/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:15:47 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/28 14:26:21 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"

t_builtin g_builtin[] =
{
	// {.builtin_name="echo", .foo=ft_exce},
	// {.builtin_name="env", .foo=ft_exce},
	{.builtin_name="exit", .foo=ft_exit},
	{.builtin_name= NULL},
};

void	ft_exit(char **args)
{
	(void)args;
	exit(EXIT_SUCCESS);
}

void	ft_getcwd(char *buf, size_t size)
{
	if (getcwd(buf, size) == NULL)
		perror (RED"getcwd FAILED"RST);
}

char	*read_line()
{
	char	*buf;
	size_t	buf_size;
	char	cwd[MYBUFSIZ];
	buf = NULL;
	ft_getcwd(cwd, sizeof(cwd));
	p(RED"💻%s💻"RST RED"$>"RST, cwd);
	if (getline(&buf, &buf_size, stdin) == -1)
	{
		free(buf);
		buf = NULL;
		if (feof(stdin))
			p(RED"[EOF]\n"RST);
		else
			p(RED"Getline failed"RST);
	}
	return (buf);
}

void	ft_exce(char **args)
{
	int			i;
	const char	*curr;

	i = 0;
	while ((curr = g_builtin[i].builtin_name))
	{
		if (!strcmp(curr, args[0]))
		{
			g_builtin[i].foo(args);
			return ;
		}
		i++;
	}
}


int	main()
{
	char *line;
	char	**args;

	printbanner();
	line = NULL;
	while ((line = read_line()))
	{
		args = split_line(line);
		for (int i = 0; args[i]; ++i)
			p("%s\n", args[i]);
		ft_exce(args);
		free(line);
		free(args);
	}
	return (EXIT_SUCCESS);
}
