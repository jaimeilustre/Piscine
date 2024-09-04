/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlcat.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/20 11:26:16 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/22 17:31:43 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	total_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	total_len = dest_len + src_len;
	if (size == 0 || dest_len >= size)
		return (total_len);
	while (src[i] != '\0' && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}

/*int	main(void)
{
	char	dest[12] = "Hello,";
	char	*src = " world!";
	char	result = ft_strlcat(dest, src, 20);

	printf("String: %s\n", dest);
	printf("Total length of string: %hhd\n", result);
	return (0);
}*/
