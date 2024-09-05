/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   solver2.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 22:11:16 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 22:11:25 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	update_grid(char **buf, int *final)
{
	int	i;
	int	j;

	i = 0;
	while (i <= final[2])
	{
		j = 0;
		while (j <= final[2])
		{
			buf[final[0] + i][final[1] + j] = 'X';
			j++;
		}
		i++;
	}
}

void	assigning_dummy_values(int *final, int *dummy)
{
	dummy[0] = 0;
	dummy[1] = 0;
	final[2] = 0;
	dummy[3] = 0;
	dummy[4] = 0;
	dummy[5] = 0;
}

void	solve(char **buf, int row, int col, int *final)
{
	int		dummy[6];

	assigning_dummy_values(final, dummy);
	while (dummy[0] < row - final[2])
	{
		dummy[1] = 0;
		while (dummy[1] < col - final[2])
		{
			dummy[4] = final[2];
			if (buf[dummy[0]][dummy[1]] == '.')
			{
				dummy[2] = check_square(buf, row, col, dummy);
				if (final[2] < dummy[2])
				{
					final[0] = dummy[0];
					final[1] = dummy[1];
					final[2] = dummy[2];
				}
			}
			dummy[1] = dummy[1] + dummy[3] + 1;
		}
		dummy[0]++;
	}
	update_grid(buf, final);
}
