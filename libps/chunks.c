/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:21:15 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/18 14:05:41 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	args_chunks(int size)
{
	int	num_chuncks;

	num_chuncks = 0;
	if (size > 5 && size < 52)
		num_chuncks = 4;
	else if (size > 51 && size < 102)
		num_chuncks = 8;
	else if (size > 101 && size < 252)
		num_chuncks = 30;
	else if (size > 251 && size < 502)
		num_chuncks = 20;
	else if (size > 501)
		num_chuncks = 40;
	return (num_chuncks);
}

int	choose_chunk(int *array, int argc, t_chunk *list_chk)
{
	int	num_of_chks;
	int	args_in_chk;
	int	i;

	i = 0;
	num_of_chks = args_chunks(argc);
	args_in_chk = argc / num_of_chks;
	while (i < num_of_chks)
	{
		list_chk[i].num_min = array[i * args_in_chk];
		list_chk[i].place_min = i * args_in_chk;
		if (i == num_of_chks - 1)
		{
			list_chk[i].num_max = array[argc - 2];
			list_chk[i].place_max = argc - 2;
		}
		else
		{
			list_chk[i].num_max = array[(i + 1) * args_in_chk - 1];
			list_chk[i].place_max = (i + 1) * args_in_chk - 1;
		}
		i++;
	}
	return (num_of_chks);
}
