/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/19 14:30:10 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 08:56:20 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		value;
	char	c;

	value = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c < 65 || (c > 90 && c < 97) || c > 122)
		{
			value = 0;
		}
		i++;
	}
	return (value);
}

/*int	main(void)
{
	char	*test1;
	char	*test2;
	char	*test3;
	char	*test4;

	test1 = "Hello123";
	test2 = "Hello";
	test3 = "";
	test4 = "goodbye";
	printf("%d\n", ft_str_is_alpha(test1));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));
	printf("%d\n", ft_str_is_alpha(test4));
	return (0);
}*/
