/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsewlia <dsewlia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 14:37:00 by dsewlia           #+#    #+#             */
/*   Updated: 2024/09/03 22:36:06 by dsewlia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//[0] is for row, [1] is for col, [2] is for squareroot of area, [3] is for next col check
void	solve(int **buf, int row, int col, int *final)
{
	int		dummy[4];

	dummy[0] = 0;
	while (dummy[0] < row - final[2])
	{
		dummy[1] = 0;
		while (dummy[1] < col - final[2])
		{
			if (buf[dummy[0]][dummy[1]] != '.')
			{
				dummy[2] = check_square(buf, row, col, dummy);
				if (final[2] > dummy[2])
				{
					final[0] = dummy[0];
					final[1] = dummy[1];
					final[2] = dummy[2];
					dummy[1] = dummy[3];
				}
				else
					dummy[1]++;
			}
			else
				dummy[1]++;
		}
		dummy[0]++;
	}
}

int	check_square(int **buf, int row, int col, int *dummy)
{
	int		i;
	int		j;
	int		n;

	n = 1;
	while (dummy[0] + n < row && dummy[1] + n < col)
	{
		i = dummy[0];
		while (i < dummy[0] + n)
		{
			j = dummy[1];
			while (j < dummy[1] + n)
			{
				dummy[3] = j + 1;
				if (buf[i + n][j + n] != '.')
					return ((n - 1));
				j++;
			}
			i++;
		}
		n++;
	}
}
