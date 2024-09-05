/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   solver.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 19:33:55 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 21:01:13 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_rows2(char *buffer, int j, int x, int row)
{
	int		places;
	int		i;

	i = 0;
	places = 1;
	while (j >= 0)
	{
		if (buffer[j] < '0' || buffer[j] > '9')
		{
			write (2, "map error\n", 10);
			return (0);
		}
		x = j;
		while (x > 0)
		{
			places = places * 10;
			x--;
		}
		row = row + (places * (buffer[i] - '0'));
		i++;
		j--;
	}
	return (row);
}

int	get_rows(char *buffer, int i, int j, int x)
{
	int		row;

	x = 0;
	x++;
	while (buffer[i] != '\n')
		i++;
	while (j < i - 4)
		j++;
	row = get_rows2(buffer, j, 0, 0);
	return (row);
}

int	check_square(char **buf, int row, int col, int *dummy)
{
	int		i;
	int		j;
	int		n;

	n = dummy[4] + 1;
	while ((dummy[0] + n) < row && (dummy[1] + n) < col)
	{
		i = 0;
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				if (buf[i + dummy[0]][j + dummy[1]] == 'o')
				{
					dummy[3] = j;
					return (n - 1);
				}
				j++;
			}
			i++;
		}
		n++;
	}
	return (0);
}
