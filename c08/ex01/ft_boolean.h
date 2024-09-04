/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_boolean.h                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: jilustre <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/08/31 14:19:21 by jilustre       #+#    #+#                */
/*   Updated: 2024/08/31 14:19:23 by jilustre       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(n) n % 2 == 0
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS TRUE

typedef int t_bool;

#endif
