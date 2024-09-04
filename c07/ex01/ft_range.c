/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_range.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/31 13:43:26 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/03 08:14:38 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < max - min)
		{
			tab[i] = min + i;
			i++;
		}
	}
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	min = -10;
// 	int	max = 5;
// 	int	*tab = ft_range(min, max);
// 	int	i;

// 	if (tab != NULL)
// 	{
// 		i = 0;
// 		while (i < max - min)
// 		{
// 			printf("%d\n", tab[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }
