/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_lowercase.c                               :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/17 16:00:10 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 09:02:47 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		value;
	int		i;
	char	c;

	value = 1;
	i = 0;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c > 122 || c < 97)
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
	printf("%d\n", ft_str_is_lowercase(test1));
	printf("%d\n", ft_str_is_lowercase(test2));
	printf("%d\n", ft_str_is_lowercase(test3));
	printf("%d\n", ft_str_is_lowercase(test4));
	printf("%d\n", ft_str_is_lowercase(test5));
	return (0);
}*/
