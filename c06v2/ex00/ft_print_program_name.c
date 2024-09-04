/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_print_program_name.c                             :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/28 09:04:29 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 15:25:52 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0])
		{
			write(1, argv[0], 1);
			argv[0]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
