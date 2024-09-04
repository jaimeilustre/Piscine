/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:21:58 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 20:03:27 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_H
# define HELPER_H

struct s_data
{
	int	column;
	int	row;
	int	size;
	int	number;
};

void	construct(struct s_data *d, int column, int row, int size);
int		is_number_unique(int **grid, struct s_data extra);
int		left_clue(int **grid, int *arguments, struct s_data extra);
int		right_clue(int **grid, int *arguments, struct s_data extra);
int		top_clue(int **grid, int *arguments, struct s_data extra);
int		bottom_clue(int **grid, int *arguments, struct s_data extra);
int		**init_grid(int size);
void	free_grid(int **grid, int amount);
int		solver(int **grid, int *arguments, struct s_data extra);
void	parse_input(char *input, int *arguments, int size);
int		count_size(char *input);
int		valid_sequence_arguments(int *arguments, int size);
void	write_str(char *str);
void	write_grid(int **grid, int size);
#endif
