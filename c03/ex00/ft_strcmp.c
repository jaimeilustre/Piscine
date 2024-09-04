/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcmp.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 08:37:06 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/22 12:02:25 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "long";
	char	str4[] = "longer";
	char	str5[] = "blue";
	char	str6[] = "black";

	printf("%s, %s, %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("%s, %s, %d\n", str2, str1, ft_strcmp(str2, str1));
	printf("%s, %s, %d\n", str3, str4, ft_strcmp(str3, str4));
	printf("%s, %s, %d\n", str4, str3, ft_strcmp(str4, str3));
	printf("%s, %s, %d\n", str5, str6, ft_strcmp(str5, str6));
	printf("%s, %s, %d\n", str6, str5, ft_strcmp(str6, str5));
	return (0);
}*/
