/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strncat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 08:38:27 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/22 12:10:52 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
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

	ft_strncat(dest, src, 2);
	printf("%s\n", dest);
	return (0);
}*/
