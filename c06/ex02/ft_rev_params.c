/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_rev_params.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/28 09:53:26 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 12:15:39 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
