/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putstr_non_printable.c                           :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 16:48:51 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 09:44:14 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[i] / 16], 1);
			write(1, &hex[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}

/*int	main(void)
{
	char	test1[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(test1);
	return (0);
}*/
