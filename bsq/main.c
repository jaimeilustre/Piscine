/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsewlia <dsewlia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:21:29 by dsewlia           #+#    #+#             */
/*   Updated: 2024/09/03 22:36:02 by dsewlia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

void print_buff(char** buff, int row, int col)
{
	int		i;
	int		j;

	i = 0;
	while (i < row - 1)
	{
		j = 0;
		while (j < col - 1)
		{
			write(1, &buff[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void print_map(char *buff)
{
	int i = 0;

	while (buff[i] != '\0')
	{
		write (1, &buff[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

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
			write (1, &buff[i][j], 1);
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

int	checkmapparam(char *buffer, char *map)
{
	int		x;
	int		i;

	x = 0;
	i = 0;
	map[0] = buffer[1];
	map[1] = buffer[2];
	map[2] = buffer[3];
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

void	free_the_birds(char *buffer, char **buff)
{
	int i;
	int j;

	while (buffer[i] != '\n')
		i++;
	i++;
	while (buffer[i] != '\n' && buffer[i] != '\0')
	{
		while(buffer[i] != '\n')
			i++;
		i++;
		j++;
	}
	free(buffer);
	while (j > 0)
	{
		free(buff[j - 1]);
		j--;
	}
}

int	main(int argc, char **argv)
{
	int		x;
	char	*buffer;
	char	**buff;
	char	map[4];
	int		col;

	//if (argc == 1)
	//{
		//to read from std input
	//}
	//else
	//{
		while (argc > 1)
		{
			buffer = read_file(argv[1], buffer);
			col = check_map(buffer, 0, 0, 0);
			if (col == 0)
				write (2, "map error\n", 10);
			else
			{
				x = checkmapparam(buffer, map);
				buff = (char **)malloc(sizeof(char *) * 2048);
				buff = getbuff(buffer, buff, col, x);
				print_buff(buff, 9, col);
				print_map(buffer);
				//go to map and get solution
				free_the_birds(buffer, buff);
				argc--;
			}
		}
	//}
	return (0);
}
