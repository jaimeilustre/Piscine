/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rush04.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/17 14:26:35 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/17 14:48:26 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush_line(int x, char e, char m, char last)
{
	int	i;
	int	z;

	i = 0;
	z = x - 2;
	ft_putchar(e);
	if (x == 1)
		ft_putchar('\n');
	while (i < z)
	{
		ft_putchar(m);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(last);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	z;

	i = 0;
	z = y - 2;
	if (x == 0 || y == 0)
		return ;
	rush_line(x, 'A', 'B', 'C');
	while (i < z)
	{
		rush_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
	{
		rush_line(x, 'C', 'B', 'A');
	}
}
