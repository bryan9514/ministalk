/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 10:39:51 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/28 12:46:54 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"

char	**split_line(char *line)
{
	char				**tokens;
	unsigned int		position;
	char				*token;
	size_t				bufsize;

	bufsize = BUFSIZ;
	position = 0;
	tokens = malloc(sizeof(char *) * bufsize);
	token = strtok(line, DEL);
	while (token)
	{
		tokens[position++] = token;
		token = strtok(NULL, DEL);
		if (position >= bufsize)
		{
			bufsize *= 2;
			tokens = ft_realloc(tokens, bufsize * sizeof(*tokens));
		}
	}
	tokens[position] = NULL;
	return (tokens);
}
// for (char *token = strtok(line, " ") ; token; token = strtok(NULL, " "))
// {
// 	tokens[position++] = token;
// }

// int	main()
// {
// 	char	s[]= "ls -la file.txt | cat";
// 	split_line(s);

// 	return (EXIT_SUCCESS);
// }
