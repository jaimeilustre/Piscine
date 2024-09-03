/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/02 13:13:21 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/02 13:36:05 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	check_valid_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i < len)
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	char_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_sign(char **str)
{
	int	sign;

	sign = 1;
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		str++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			sign *= -1;
		str++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	sign;
	int	result;
	int	i;

	result = 0;
	if (!check_valid_base(base))
		return (0);
	base_len = ft_strlen(base);
	sign = check_sign(&str);
	while (*str)
	{
		i = char_in_base(*str, base);
		if (i == -1)
			break ;
		result = result * base_len + i;
		str++;
	}
	return (sign * result);
}

int calculate_length(int nbr, int base_len)
{
    int len;

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
    if (nbr == 0)
        result[0] = base[0];
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
	char	*base2 = "poneyvif";

	printf("%s\n", ft_convert_base(str1, base1, base2));
	free(ft_convert_base(str1, base1, base2));
}
