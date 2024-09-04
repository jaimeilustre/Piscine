/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_fibonacci.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/26 12:50:00 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 13:53:18 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(void)
{
	int	n = 20;

	printf("%d\n", ft_fibonacci(n));
}*/
