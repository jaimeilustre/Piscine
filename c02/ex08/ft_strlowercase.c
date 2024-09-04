/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlowercase.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 13:45:58 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 16:30:34 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	test1[] = "HELLO, WORLD!";

	printf("%s\n", test1);
	printf("%s\n", ft_strlowercase(test1));
	return (0);
}
