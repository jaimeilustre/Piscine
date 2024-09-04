/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcpy.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 16:33:14 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/21 09:40:29 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}

/*int	main(void)
{
	char	src[] = "Hello, world!";
	char	dest[20];
	unsigned int		size;
	unsigned int		result;

	size = 6;
	result = ft_strlcpy(dest, src, size);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Length: %u\n", result);
	return (0);
}*/
