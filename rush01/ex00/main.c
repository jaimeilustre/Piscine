/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:22:36 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 20:24:14 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "helper.h"

int	*init_arguments(int size)
{
	int	i;
	int	*args;

	i = 0;
	args = malloc(sizeof(int) * size * 4);
	if (args == 0)
		return (0);
	while (i < (size * 4))
	{
		args[i] = 0;
		i++;
	}
	return (args);
}

int	*parse_size(int *arguments, struct s_data *extra, char *input)
{
	extra->size = count_size(input);
	if (extra->size == 0)
	{
		write_str("No size matches the amount numbers!\n");
		return (0);
	}
	arguments = init_arguments(extra->size);
	if (arguments == 0)
	{
		write_str("Failed to allocate memory for arguments\n");
		return (0);
	}
	parse_input(input, arguments, extra->size);
	if (valid_sequence_arguments(arguments, extra->size) == 0)
	{
		write_str("Sequence contains number larger than size!\n");
		return (0);
	}
	return (arguments);
}

void	execute(int *arguments, struct s_data extra)
{
	int	**grid;

	grid = init_grid(extra.size);
	if (grid != 0)
	{
		if (solver(grid, arguments, extra))
			write_grid(grid, extra.size);
		else
			write_str("ERROR!\n");
		free_grid(grid, extra.size);
		grid = 0;
	}
	else
		write_str("Failed to allocate memory for solution!\n");
}

int	main(int argc, char *argv[])
{
	int				*arguments;
	struct s_data	extra;

	arguments = 0;
	construct(&extra, 0, 0, 4);
	if (argc != 2)
	{
		write_str("Program accepts one additional argument!\n");
		return (1);
	}
	arguments = parse_size(arguments, &extra, argv[1]);
	if (arguments == 0)
		return (2);
	execute(arguments, extra);
	free(arguments);
	arguments = 0;
	return (0);
}
