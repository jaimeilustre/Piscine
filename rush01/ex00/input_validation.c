/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:30:54 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 20:21:33 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	parse_input(char *input, int *arguments, int size)
{
	int	i;

	i = 0;
	while (i < (size * 4))
	{
		arguments[i] = *input - '0';
		input += 2;
		i++;
	}
}

int	get_size(int count)
{
	const int	possible_size[9] = {16, 25, 36, 49, 56, 64, 81};
	int			i;

	i = 0;
	while (i < 9)
	{
		if (count == possible_size[i])
			return (possible_size[i] / (4 + i));
		i++;
	}
	return (0);
}

int	count_size(char *input)
{
	int	count;
	int	is_space;

	count = 0;
	is_space = 1;
	while (*input)
	{
		if (is_space)
		{
			if (char_is_numeric(*input))
				count++;
			else
				return (0);
			is_space = 0;
		}
		else if (*input == ' ')
			is_space = 1;
		else
			return (0);
		input++;
	}
	return (get_size(count));
}

int	valid_sequence_arguments(int *arguments, int size)
{
	int	i;

	i = 0;
	while (i < size * 4)
	{
		if (arguments[i] < 1 || arguments[i] > size)
			return (0);
		i++;
	}
	return (1);
}
