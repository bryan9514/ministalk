/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cell.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brturcio <brturcio@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:17:46 by brturcio          #+#    #+#             */
/*   Updated: 2025/04/26 19:01:46 by brturcio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CELL_H
# define CELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

# define Y "\033[1;33m"
# define G "\033[1;32m"
# define C "\033[1;36m"
# define RED "\033[1;31m"
# define RST "\033[0m"

# define MYBUFSIZ 1024

# define p(...) printf(__VA_ARGS__)

#endif
