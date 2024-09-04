/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strstr.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 08:39:25 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/28 16:53:39 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*h;
	char	*n;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		h = str;
		n = to_find;
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (str);
		str++;
	}
	return (0);
}

int	main(void)
{
	char	*str;
	char	*substr;
	char	*result;

	str = "Hello, worlld!";
	substr = "ld";
	result = ft_strstr(str, substr);
	if (result)
	{
		printf ("Located at %ld\n", result - str);
	}
	else
	{
		printf ("Not located");
	}
	return (0);
}
