/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strdup.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/29 12:51:05 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/03 08:09:17 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*dest;
	int		i;

	src_size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * src_size + 1);
	i = 0;
	while (i <= src_size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*original = "Hello, world!";
// 	char	*duplicate = ft_strdup(original);

// 	if (duplicate != 0)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Duplicate: %s\n", duplicate);
// 		free(duplicate);
// 	}
// 	else
// 		printf("Memory allocation not successful");
// 	return (0);
// }
