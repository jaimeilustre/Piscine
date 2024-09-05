/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   buffer.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 19:33:13 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 20:52:27 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**getbuff(char *buffer, char **buff, int col, int x)
{
	int		i;
	int		j;

	i = 0;
	while (buffer[x] != '\0' && buffer[x] != '\n')
	{
		buff[i] = (char *)malloc(sizeof(char) * col + 1);
		j = 0;
		while (buffer[x] != '\n' && buffer[x] != '\0')
		{
			buff[i][j] = buffer[x];
			j++;
			x++;
		}
		buff[i][j] = '\0';
		if (buffer[x] == '\n')
			x++;
		i++;
	}
	return (buff);
}

void	free_the_birds(char *buffer, char **buff, int i)
{
	free(buffer);
	while (i > 0)
	{
		free(buff[i - 1]);
		i--;
	}
	free(buff);
}
