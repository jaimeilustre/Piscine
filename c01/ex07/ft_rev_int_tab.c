/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_int_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/19 13:06:28 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/19 14:15:39 by jilustre       ########   odam.nl        */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Original Array: ");
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("Reversed Array: ");
	while (j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
	printf("\n");
	return (0);
}*/
