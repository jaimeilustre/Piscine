/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strupcase.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 13:39:48 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 09:16:52 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	test1[] = "hello, world!";

	printf("%s\n", test1);
	printf("%s\n", ft_strupcase(test1));
	return (0);
}*/
