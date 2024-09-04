/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-maa <svan-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:18:30 by svan-maa          #+#    #+#             */
/*   Updated: 2024/08/17 14:37:57 by svan-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int width, char left, char middle, char right)
{
	int	i;

	ft_putchar(left);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, '/', '*', '\\');
	j = 1;
	while (j < y - 1)
	{
		print_line(x, '*', ' ', '*');
		j++;
	}
	if (y > 1)
		print_line(x, '\\', '*', '/');
}
