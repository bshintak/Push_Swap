/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_of_chunks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:37:38 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/10 14:55:23 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	 num_chunks(int size)
{
	int	chunk;

	chunk = 0;
	if (size < 5 && size < 51)
		chunk = 4;
	else if (size > 50 && size < 100)
		chunk = 8;
	else if (size == 100)
		chunk =  10;
	else if (size > 100 && size < 201)
		chunk = 32;
	else if (size > 200 && size < 500)
		chunk = 64;
	else if (size == 500)
		chunk = 100;
	else if (size > 500)
		chunk = 100;
	return (chunk);
}

int	chunks(t_chunk *list)
