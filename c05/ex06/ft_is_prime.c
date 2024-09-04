/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_is_prime.c                                       :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/27 10:55:41 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:58:51 by jilustre       ########   odam.nl        */
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

/*int	main(void)
{
	int	test = 4;

	printf("%d\n", ft_is_prime(test));
}*/
