/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strs_to_tab.c                                    :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/31 15:56:18 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/31 15:56:19 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int len;

    len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int i;
	char *dup;

	i = 0;
	dup = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *array;

	if (ac <= 0 || !av)
		return (NULL);
	array = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!array)
		return (NULL);
    i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (!array[i].copy)
		{
			while (i > 0)
				free(array[--i].copy);
			free(array);
			return (NULL);
		}
        i++;
	}
	array[ac].str = 0;
	return (array);
}

#include <stdio.h>

t_stock_str	*ft_strs_to_tab(int ac, char **av);

void	print_tab(t_stock_str *tab)
{
	int i = 0;
	while (tab[i].str != 0)
	{
		printf("Original: %s, Copy: %s, Size: %d\n", tab[i].str, tab[i].copy, tab[i].size);
		i++;
	}
}

int main(int argc, char **argv)
{
	t_stock_str *result = ft_strs_to_tab(argc - 1, argv + 1);
	if (result)
	{
		print_tab(result);
		for (int i = 0; i < argc - 1; i++)
			free(result[i].copy);
		free(result);
	}
	return 0;
}
