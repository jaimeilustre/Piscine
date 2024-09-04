/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_sort_int_tab.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/19 16:54:16 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/19 17:07:07 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab [j] > tab [j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {1, 20, 17, 32, 25, 8};
	int size = 6;
	int	i;
	int	j;

	i = 0;
	printf("Original array: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);
	i = 0;
	printf("Sorted array: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
