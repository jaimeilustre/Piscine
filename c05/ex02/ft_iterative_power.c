/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/26 11:38:23 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:47:19 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/*int	main(void)
{
	int	base = 5;
	int	exponent = 3;

	printf("Result = %d\n", ft_iterative_power(base, exponent));
	return (0);
}*/
