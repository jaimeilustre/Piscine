/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncmp.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 08:37:42 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/22 12:05:34 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "Hello";
	char	str3[] = "long";
	char	str4[] = "longer";

	printf("%s, %s, %d\n", str1, str2, ft_strncmp(str1, str2, 1));
	printf("%s, %s, %d\n", str3, str4, ft_strncmp(str3, str4, 4));
	printf("%s, %s, %d\n", str3, str4, ft_strncmp(str3, str4, 5));
	return (0);
}*/
