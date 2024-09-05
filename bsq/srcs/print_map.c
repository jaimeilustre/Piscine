/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   print_map.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 19:33:35 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 21:58:28 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_buff(char **buff, int row, int col)
{
	int		i;
	int		j;

	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < col)
		{
			write(1, &buff[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
