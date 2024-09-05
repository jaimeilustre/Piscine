/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putnbr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/28 11:18:37 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/02 10:35:26 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

// int	main(void)
// {
// 	int	test1 = 0;
// 	int	test2 = -2147483648;
// 	int	test3 = 1001;
// 	int	test4 = 2147483647;

// 	ft_putnbr(test1);
// 	ft_putchar('\n');
// 	ft_putnbr(test2);
// 	ft_putchar('\n');
// 	ft_putnbr(test3);
// 	ft_putchar('\n');
// 	ft_putnbr(test4);
// 	ft_putchar('\n');
// 	return (0);
// }
