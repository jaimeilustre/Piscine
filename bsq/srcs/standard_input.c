/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   standard_input.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 21:59:02 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 22:08:16 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	initiate_input(char *buffer, int x, int col)
{
	char	**buff;
	char	map[4];
	int		final[3];

	final[0] = 0;
	final[1] = 0;
	final[2] = 0;
	col = check_map(buffer, 0, 0, 0);
	if (col == 0)
		write (2, "map error\n", 10);
	else
	{
		x = checkmapparam(buffer, map, 0, 0);
		buff = (char **)malloc(sizeof(char *) * 2048);
		buff = getbuff(buffer, buff, col, x);
		solve(buff, get_rows(buffer, 0, 0, 0), col, final);
		print_buff(buff, get_rows(buffer, 0, 0, 0), col);
		free_the_birds(buffer, buff, get_rows(buffer, 0, 0, 0));
	}
}

char	*read_input(int *fl, int *col, int *row)
{
	char	*b1;
	int		local_fl;		

	local_fl = 0;
	b1 = (char *)malloc(sizeof(char) * 100000);
	while (local_fl == 0 || b1[local_fl - 1] != '\n')
	{
		read(0, &b1[local_fl], 1);
		local_fl++;
	}
	while (*col == 0 || b1[local_fl + *col - 1] != '\n')
	{
		read(0, &b1[local_fl + *col], 1);
		(*col)++;
	}
	b1[local_fl + *col] = '\0';
	*row = get_rows(b1, 0, 0, 0);
	*fl = local_fl;
	return (b1);
}

int	process_and_initiate(char *b1, int fl, int row, int col)
{
	char	*buffer;
	int		i;

	i = 0;
	buffer = (char *)malloc(sizeof(char) * (fl + (row * (col + 1)) + 1));
	while (b1[i] != '\0')
	{
		buffer[i] = b1[i];
		i++;
	}
	while (i < fl + (row * col))
	{
		read(0, &buffer[i], 1);
		i++;
	}
	initiate_input(buffer, 0, 0);
	return (0);
}

int	ini_from_ip(int i, int j, int row, int col)
{
	int		fl;
	char	*b1;

	i = 0;
	j = 0;
	i++;
	j++;
	b1 = read_input(&fl, &col, &row);
	process_and_initiate(b1, fl, row, col);
	return (0);
}
