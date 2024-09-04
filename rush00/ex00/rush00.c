/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   rush00.c                                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/17 12:50:19 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/17 13:46:55 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	rush_line(int x, char e, char m)
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
		ft_putchar(e);
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
	rush_line(x, 'o', '-');
	while (i < z)
	{
		rush_line(x, '|', ' ');
		i++;
	}
	if (y > 1)
	{
		rush_line(x, 'o', '-');
	}
}
