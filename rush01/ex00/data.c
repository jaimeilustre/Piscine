/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jboon <jboon@student.codam.nl>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 18:28:25 by jboon             #+#    #+#             */
/*   Updated: 2024/08/25 19:01:10 by jboon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper.h"

void	construct(struct s_data *d, int column, int row, int size)
{
	d->column = column;
	d->row = row;
	d->size = size;
	d->number = 1;
}
