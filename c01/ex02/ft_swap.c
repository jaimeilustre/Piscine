/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: jilustre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 09:11:44 by jilustre          #+#    #+#             */
/*   Updated: 2024/08/19 13:48:20 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 7;
	printf("%d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}*/
