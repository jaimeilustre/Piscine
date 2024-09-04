/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strcat.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 08:38:01 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/22 12:08:20 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	dest[20] = "Hello";
	char	src[] = " World";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
