/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/23 17:11:28 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:43:18 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	test = 10;

	printf("%d", ft_iterative_factorial(test));
	return (0);
}*/
