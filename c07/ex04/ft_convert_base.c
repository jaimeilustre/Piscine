/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_convert_base.c                                   :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/02 13:13:21 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/03 07:33:56 by jilustre       ########   odam.nl        */
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
