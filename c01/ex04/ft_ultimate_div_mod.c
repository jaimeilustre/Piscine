/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:21:35 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/19 14:03:55 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 2;
	printf("a: %d, b: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d, b: %d\n", a, b);
	return (0);
}*/
