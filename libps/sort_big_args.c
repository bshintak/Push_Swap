/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:17:47 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/18 12:41:31 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_long(t_stack *stack, int argc)
{
	t_chunk	list[50];
	int		*array;
	int		num_of_chks;

	array = array_sort(stack, argc - 1);
	num_of_chks = choose_chunk(array, argc, list);
	push_to_b(stack, list, num_of_chks);
	if (stack->a != NULL)
		move_pb(stack);
	push_to_a(stack);
	free(array);
}
