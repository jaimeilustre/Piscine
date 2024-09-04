/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                        :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 09:48:19 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/21 08:48:35 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "Hello, world!";
	char dest[30];

	ft_strncpy(dest, src, 5);
	printf("5 characters copied: %s\n", dest);
	ft_strncpy(dest, src, 13);
	printf("13 characters copied: %s\n", dest);
	return (0);
}*/
