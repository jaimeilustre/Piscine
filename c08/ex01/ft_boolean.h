/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_boolean.h                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/31 14:19:21 by jilustre       #+#    #+#                */
/*   Updated: 2024/09/05 07:47:57 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define EVEN(nb) ((nb) % 2 == 0)
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif
