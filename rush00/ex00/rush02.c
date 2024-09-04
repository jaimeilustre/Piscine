/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-maa <svan-maa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 12:50:19 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/17 14:37:02 by svan-maa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, char edge, char middle)
{
	int	i;

	ft_putchar(edge);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(edge);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, 'A', 'B');
	j = 1;
	while (j < y - 1)
	{
		print_line(x, 'B', ' ');
		j++;
	}
	if (y > 1)
		print_line(x, 'C', 'B');
}
