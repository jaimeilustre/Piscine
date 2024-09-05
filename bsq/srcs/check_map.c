/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   check_map.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 19:33:23 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 20:57:04 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	checkmapparam(char *buffer, char *map, int x, int i)
{
	while (buffer[i] != '\n')
		i++;
	if (buffer[i - 1] == buffer[i - 2] || buffer[i - 2] == buffer[i -3]
		|| buffer[i - 3] == buffer [i - 1])
	{
		write (2, "map error\n", 10);
		return (0);
	}
	map[0] = buffer[i - 3];
	map[1] = buffer[i - 2];
	map[2] = buffer[i - 1];
	while (buffer[x] != '\n' && buffer[x] != '\0')
		x++;
	x++;
	i = 0;
	while (buffer[i + x] != '\0')
	{
		if (buffer[i + x] == map[0])
			buffer[i + x] = '.';
		else if (buffer[i + x] == map[1])
			buffer[i + x] = 'o';
		i++;
	}
	return (x);
}

int	check_map(char *b, int i, int col, int check_col)
{
	while (b[i] != '\n')
		i++;
	if (b[i - 1] == b[i - 2] || b[i - 2] == b[i - 3] || b[i - 3] == b[i - 1])
		return (0);
	i++;
	while (b[i] != '\n')
	{
		i++;
		col++;
	}
	while (b[i] != '\n' && b[i] != '\0')
	{
		check_col = 0;
		while (b[i] != '\n')
		{
			check_col++;
			i++;
		}
		if (check_col != col)
			return (0);
		if (b[i] == '\n')
			i++;
	}
	return (col);
}
