/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_putchar.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/17 12:49:43 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/17 12:53:48 by dloustal       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
