/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   bsq.h                                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 19:24:05 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 22:13:18 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

int		main(int argc, char **argv);
void	print_buff(char **buff, int row, int col);
char	*read_file(const char *filename, char *buffer);
char	**getbuff(char *buffer, char **buff, int col, int x);
int		checkmapparam(char *buffer, char *map, int x, int i);
int		check_map(char *b, int i, int col, int check_col);
void	free_the_birds(char *buffer, char **buff, int i);
int		get_rows(char *buffer, int i, int j, int x);
int		get_rows2(char *buffer, int j, int x, int row);
int		check_square(char **buf, int row, int col, int *dummy);
void	solve(char **buf, int row, int col, int *final);
void	assigning_dummy_values(int *final, int *dummy);
void	initiate(char *argv, int x, int col);
void	update_grid(char **buf, int *final);
void	initiate_input(char *buffer, int x, int col);
char	*read_input(int *fl, int *col, int *row);
int		process_and_initiate(char *b1, int fl, int row, int col);
int		ini_from_ip(int i, int j, int row, int col);

#endif
