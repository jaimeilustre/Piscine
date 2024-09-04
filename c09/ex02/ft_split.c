/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/09/04 07:35:20 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/04 07:35:23 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (is_seperator(*str, charset))
		{
			if (in_word)
				in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*allocate_word(char *start, char *end)
{
	char	*word;
	int		length;
	int		i;

	length = end - start;
	word = (char *)malloc(length + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = *start;
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	split_words(char *str, char *charset, char **result)
{
	int		i;
	char	*word_start;

	i = 0;
	while (*str)
	{
		if (is_seperator(*str, charset))
			str++;
		else
		{
			word_start = str;
			while (*str && !is_seperator(*str, charset))
				str++;
			result[i] = allocate_word(word_start, str);
			if (!result[i])
				return ;
			i++;
		}
	}
	result[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		words;

	words = count_words(str, charset);
	result = (char **)malloc(sizeof(char *) * words + 1);
	if (!result)
		return (NULL);
	split_words(str, charset, result);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**result;
// 	char	str[] = "Hello, world";
// 	char	charset[] = " ,";
// 	int		i = 0;

// 	result = ft_split(str, charset);
// 	while (result[i] != 0)
// 	{
// 		printf("result[%d]: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
