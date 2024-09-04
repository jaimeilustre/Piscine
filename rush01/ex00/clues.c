/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clues.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:25:56 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 19:26:13 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int	left_clue(int **grid, int *arguments, struct s_data extra)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < extra.size)
	{
		if (grid[extra.row][i] > max)
		{
			max = grid[extra.row][i];
			count++;
		}
		i++;
	}
	if (count != arguments[extra.row + (extra.size * 2)])
		return (0);
	return (1);
}

int	right_clue(int **grid, int *arguments, struct s_data extra)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = extra.size - 1;
	while (i >= 0)
	{
		if (grid[extra.row][i] > max)
		{
			max = grid[extra.row][i];
			count++;
		}
		i--;
	}
	if (count != arguments[extra.row + (extra.size * 3)])
		return (0);
	return (1);
}

int	top_clue(int **grid, int *arguments, struct s_data extra)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < extra.size)
	{
		if (grid[i][extra.column] > max)
		{
			max = grid[i][extra.column];
			count++;
		}
		i++;
	}
	if (count != arguments[extra.column])
		return (0);
	return (1);
}

int	bottom_clue(int **grid, int *arguments, struct s_data extra)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = extra.size - 1;
	while (i >= 0)
	{
		if (grid[i][extra.column] > max)
		{
			max = grid[i][extra.column];
			count++;
		}
		i--;
	}
	if (count != arguments[extra.column + extra.size])
		return (0);
	return (1);
}
