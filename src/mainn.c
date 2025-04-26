/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:15:47 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/26 19:04:04 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"

void	ft_getcwd(char *buf, size_t size)
{
	if (getcwd(buf, size) == NULL)
		perror (RED"getcwd FAILED"RST);
}

char	*cell_read_line()
{
	char	*buf;
	size_t	buf_size;
	char	cwd[MYBUFSIZ];

	buf = NULL;
	ft_getcwd(buf, sizeof(cwd));
	p(C"%s"RST"$>", cwd);
	if (getline(&buf, &buf_size, stdin) == -1)
	{
		buf = NULL;
		if (feof(stdin))
			p(RED"[EOF]"RST);
		else
			p(RED"Getline failed"RST);
	}
	return (buf);
}

int	main()
{
	char *line;

	while (0xCE77)
	{
		line = cell_read_line();
		p("%s\n", line);
	}
	return (EXIT_SUCCESS);
}
