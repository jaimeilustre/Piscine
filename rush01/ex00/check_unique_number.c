/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_unique_number.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:58:45 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 19:27:37 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

int	is_number_unique(int **grid, struct s_data extra)
{
	int	i;
	int	column;
	int	row;

	i = 0;
	column = extra.column;
	row = extra.row;
	while (i < extra.size)
	{
		if (grid[row][i] == extra.number || grid[i][column] == extra.number)
			return (0);
		i++;
	}
	return (1);
}
