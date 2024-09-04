/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:33:50 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/19 14:12:04 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}

/*int	main(void)
{
	char	*test;

	test = "Hello, world!";
	printf("%d\n", ft_strlen(test));
}*/
