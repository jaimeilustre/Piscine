/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/19 14:57:18 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 09:06:03 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int		value;
	int		i;
	char	c;

	value = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c > 90 || c < 65)
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
	char	*test5;

	test1 = "hello";
	test2 = "HELLO";
	test3 = "HeLlO";
	test4 = "abc123";
	test5 = "";
	printf("%d\n", ft_str_is_uppercase(test1));
	printf("%d\n", ft_str_is_uppercase(test2));
	printf("%d\n", ft_str_is_uppercase(test3));
	printf("%d\n", ft_str_is_uppercase(test4));
	printf("%d\n", ft_str_is_uppercase(test5));
	return (0);
}*/
