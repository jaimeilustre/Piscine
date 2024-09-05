/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                              :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: dsewlia <dsewlia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:21:29 by dsewlia           #+#    #+#             */
/*   Updated: 2024/09/04 22:09:09 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	initiate(char *argv, int x, int col)
{
	char	*buffer;
	char	**buff;
	char	map[4];
	int		final[3];

	buffer = NULL;
	final[0] = 0;
	final[1] = 0;
	final[2] = 0;
	buffer = read_file(argv, buffer);
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

int	main(int argc, char **argv)
{
	int		i;
	int		a;

	i = 1;
	if (argc == 1)
	{
		a = ini_from_ip(0, 0, 0, 0);
		return (a);
	}
	while (argc > 1)
	{
		initiate(argv[i], 0, 0);
		write(1, "\n", 1);
		argc--;
		i++;
	}
	return (0);
}
