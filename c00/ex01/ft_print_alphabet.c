/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:52:02 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/15 11:56:12 by jilustre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 97;
	while (c <= 122)
	{
		write (1, &c, 1);
		c++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
