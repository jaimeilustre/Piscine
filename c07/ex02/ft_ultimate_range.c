/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_ultimate_range.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/31 13:43:53 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/31 13:43:57 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;

    if (min >= max)
    {
        *range = (NULL);
        return (0);
    }
    tab = (int*)malloc(sizeof(*tab) * (max - min));
    if (tab == NULL)
        return (-1);
    else
    {
        i = 0;
        while (i < max - min)
        {
            tab[i] = min + i;
            i++;
        }
        *range = tab;
        return (i);
    }
}

#include <stdio.h>

int main(void)
{
    int min = 7;
    int max = 5;
    int *tab;
    int i;

    ft_ultimate_range(&tab, min, max);
    if (tab != NULL)
    {
        i = 0;
        while (i < max - min)
        {
            printf("%d\n", tab[i]);
            i++;
        }
    }
    return (0);
}
