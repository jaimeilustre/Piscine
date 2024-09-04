/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:19:34 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 19:26:27 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "helper.h"

void	free_grid(int **grid, int amount)
{
	int	row;

	row = 0;
	while (row < amount)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}

int	**init_grid(int size)
{
	int	row;
	int	column;
	int	**grid;

	grid = malloc(sizeof(int *) * size);
	row = 0;
	if (grid == 0)
		return (0);
	while (row < size)
	{
		grid[row] = malloc(sizeof(int) * size);
		if (grid[row] == 0)
		{
			free_grid(grid, row);
			return (0);
		}
		column = 0;
		while (column < size)
		{
			grid[row][column] = 0;
			column++;
		}
		row++;
	}
	return (grid);
}

int	is_valid(int **grid, int *arguments, struct s_data extra)
{
	if (is_number_unique(grid, extra) == 0)
		return (0);
	grid[extra.row][extra.column] = extra.number;
	if (extra.column == (extra.size - 1))
	{
		if (left_clue(grid, arguments, extra) == 0)
			return (0);
		if (right_clue(grid, arguments, extra) == 0)
			return (0);
	}
	if (extra.row == (extra.size - 1))
	{
		if (top_clue(grid, arguments, extra) == 0)
			return (0);
		if (bottom_clue(grid, arguments, extra) == 0)
			return (0);
	}
	return (1);
}

int	solver(int **grid, int *arguments, struct s_data extra)
{
	int				next_row;
	int				next_column;
	struct s_data	next;

	if (extra.row == extra.size)
		return (1);
	extra.number = 1;
	next_row = extra.row + (extra.column + 1) / extra.size;
	next_column = (extra.column + 1) % extra.size;
	while (extra.number <= extra.size)
	{
		if (is_valid(grid, arguments, extra))
		{
			grid[extra.row][extra.column] = extra.number;
			construct(&next, next_column, next_row, extra.size);
			if (solver(grid, arguments, next))
				return (1);
		}
		grid[extra.row][extra.column] = 0;
		extra.number++;
	}
	return (0);
}
