/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   read_file.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 19:33:45 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 20:59:04 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_file(const char *filename, char *buffer)
{
	int		fd;
	int		i;
	char	*a;

	i = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write (2, "error opening file\n", 20);
		return (0);
	}
	while (read(fd, &a, 1) != 0)
		i++;
	buffer = malloc(sizeof(char) * i + 1);
	close (fd);
	fd = 0;
	fd = open(filename, O_RDONLY);
	read (fd, buffer, i);
	buffer[i] = '\0';
	close (fd);
	return (buffer);
}
