/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rush03.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: dloustal <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/17 14:19:14 by dloustal       #+#    #+#                */
/*   Updated: 2024/08/17 14:31:11 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush_line(int x, char s, char m, char e)
{
	int	i;
	int	z;

	i = 0;
	z = x - 2;
	ft_putchar(s);
	if (x == 1)
		ft_putchar('\n');
	while (i < z)
	{
		ft_putchar(m);
		i++;
	}
	if (x > 1)
	{
		ft_putchar(e);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x == 0 || y == 0)
		return ;
	rush_line(x, 'A', 'B', 'C');
	while (i < y - 2)
	{
		rush_line(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		rush_line(x, 'A', 'B', 'C');
}
