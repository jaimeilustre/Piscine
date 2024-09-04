/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:26:13 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/21 08:46:19 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char*src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[] = "Hello, world!";
	char dest[20];

	ft_strcpy(dest, src);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	return (0);
}*/
