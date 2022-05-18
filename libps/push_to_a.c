/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 11:57:00 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/18 12:38:31 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_stack *stack)
{
	t_list	*tmp;

	tmp = stack->b;
	while (stack->b != NULL)
	{
		tmp = stack->b;
		if (biggest_arg(tmp) == 0)
			move_pa(stack);
		else if (biggest_arg(tmp) <= (strlen_list_b(stack) / 2)
			&& biggest_arg(tmp) != 0)
			move_rb(stack);
		else if (biggest_arg(tmp) > (strlen_list_b(stack) / 2)
			&& biggest_arg(tmp) != 0)
			move_rrb(stack);
	}
}
