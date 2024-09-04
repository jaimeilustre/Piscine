/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/26 10:54:31 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:45:05 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	test = 8;

	printf("%d", ft_recursive_factorial(test));
	return (0);
}*/
