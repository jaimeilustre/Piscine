/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_printable.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 13:35:38 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/23 08:56:41 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	int		value;
	char	c;

	i = 0;
	value = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= 126 || c <= 32)
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;

	test1 = "Hello";
	test2 = "hello+!";
	test3 = "goodbye123%&";
	test4 = "\n\t\r\0";
	printf("%d\n", ft_str_is_printable(test1));
	printf("%d\n", ft_str_is_printable(test2));
	printf("%d\n", ft_str_is_printable(test3));
	printf("%d\n", ft_str_is_printable(test4));
}
