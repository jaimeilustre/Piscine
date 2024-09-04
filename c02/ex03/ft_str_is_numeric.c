/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_str_is_numeric.c                                 :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/19 14:52:07 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 08:59:20 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		value;	
	char	c;

	i = 0;
	value = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c > 57 || c < 48)
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

	test1 = "012345";
	test2 = "0123hello";
	test3 = "";
	test4 = "goodbye123!";
	printf("%d\n", ft_str_is_numeric(test1));
	printf("%d\n", ft_str_is_numeric(test2));
	printf("%d\n", ft_str_is_numeric(test3));
	printf("%d\n", ft_str_is_numeric(test4));
	return (0);
}*/
