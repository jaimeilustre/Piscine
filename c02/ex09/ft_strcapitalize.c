/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcapitalize.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 13:51:05 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 09:56:00 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nextword;

	i = 0;
	nextword = 1;
	while (str[i] != '\0')
	{
		if (nextword && str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == ',' || str[i] == '.' || str[i] == '!')
		{
			nextword = 1;
		}
		else
		{
			nextword = 0;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	test1[] = "hello, world! what's up?";

	printf("%s\n", test1);
	printf("%s\n", ft_strcapitalize(test1));
	return (0);
}*/
