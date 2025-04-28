/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:17:15 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/28 12:00:45 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cell.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new_ptr;

	new_ptr = realloc(ptr, size);
	if(!new_ptr)
	{
		perror(RED"realloc failed"RST);
		exit(EXIT_FAILURE);
	}
	return (new_ptr);
}
