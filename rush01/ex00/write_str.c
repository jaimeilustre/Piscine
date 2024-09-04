/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:52:19 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 22:55:46 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	write_grid(int **grid, int size)
{
	int		x;
	int		y;
	char	c;

	y = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			c = grid[y][x] + '0';
			write(1, &c, 1);
			if (x < (size - 1))
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
