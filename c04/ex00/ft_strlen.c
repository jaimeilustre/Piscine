/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_strlen.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/28 11:11:03 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/02 08:09:43 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*int	main(void)
{
	char	*test = "Hello, world!";

	printf("Length: %d\n", ft_strlen(test));
}*/
