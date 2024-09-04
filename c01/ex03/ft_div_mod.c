/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                        :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:30:16 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/19 13:56:18 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 5;
	b = 2;
	printf("a: %d, b: %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
	return (0);
}*/
