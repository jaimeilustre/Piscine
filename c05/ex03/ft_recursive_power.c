/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/26 12:06:28 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:50:15 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*int	main(void)
{
	int	base = 5;
	int	exponent = 3;

	printf("Result = %d\n", ft_recursive_power(base, exponent));
	return (0);
}*/
