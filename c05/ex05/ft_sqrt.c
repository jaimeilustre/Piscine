/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sqrt.c                                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/26 16:12:51 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:56:00 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	test1 = 25;
	int	test2 = 20;

	printf("Number: %d, Square root: %d\n", test1, ft_sqrt(test1));
	printf("Number: %d, Square root: %d\n", test2, ft_sqrt(test2));
}*/
