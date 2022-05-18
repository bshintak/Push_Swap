/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:40:53 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/17 11:41:18 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*make_array(t_stack *stack, int argc)
{
	int	*array;
	int	i;

	i = 0;
	array = (int *)malloc(argc * sizeof(int));
	while (argc > i)
	{
		array[i] = stack->a->content;
		stack->a = stack->a->next;
		i++;
	}
	return (array);
}

int	*array_sort(t_stack *stack, int argc)
{
	int	*array;
	int	tmp;
	int	pos_arg;
	int	i;

	pos_arg = 0;
	tmp = 0;
	array = make_array(stack, argc);
	while (pos_arg < argc)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
			i++;
		}
		pos_arg++;
	}
	return (array);
}
