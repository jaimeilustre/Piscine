/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_find_next_prime.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/27 11:17:55 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 14:01:23 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*int	main(void)
{
	int	test1 = 1;
	int	test2 = 2;
	int	test3 = 24;

	printf("Input: %d, output: %d\n", test1, ft_find_next_prime(test1));
	printf("Input: %d, output: %d\n", test2, ft_find_next_prime(test2));
	printf("Input: %d, output: %d\n", test3, ft_find_next_prime(test3));
	return (0);
}*/
