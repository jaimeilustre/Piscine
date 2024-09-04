/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base2.c                                  :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/03 07:50:47 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/03 07:50:51 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	check_valid_base(char *base);
int	char_in_base(char c, char *base);
int	check_sign(char **str);
int	ft_atoi_base(char *str, char *base);

int	calculate_length(int nbr, int base_len)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / base_len;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(int nbr, char *base)
{
	int		base_len;
	int		len;
	char	*result;

	base_len = ft_strlen(base);
	len = calculate_length(nbr, base_len);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
		result[0] = base[0];
	if (nbr < 0)
	{
		result [0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		len--;
		result[len] = base[nbr % base_len];
		nbr = nbr / base_len;
	}
	// if (nbr == 0)
	// 	result[0] = base[0];
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		intermediate;
	char	*result;

	if (!check_valid_base(base_from) || !check_valid_base(base_to))
		return (NULL);
	intermediate = ft_atoi_base(nbr, base_from);
	result = ft_itoa_base(intermediate, base_to);
	return (result);
}

#include <stdio.h>

int	main(void)
{
	char	*str1 = "2A";
	char	*base1 = "0123456789ABCDEF";
	char	*base2 = "0123456789";

	printf("%s\n", ft_convert_base(str1, base1, base2));
	free(ft_convert_base(str1, base1, base2));
}
