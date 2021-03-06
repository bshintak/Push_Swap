/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:21:27 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/28 15:28:19 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ra(t_stack *stack)
{
	if (stack->a)
	{
		stack->a = stack->a->next;
		ft_printf("ra\n");
	}
}

void	move_rb(t_stack *stack)
{
	if (stack->b)
	{
		stack->b = stack->b->next;
		ft_printf("rb\n");
	}
}

void	move_rr(t_stack *stack)
{
	if (stack->a && stack->b)
	{
		move_ra(stack);
		move_rb(stack);
		ft_printf("rr\n");
	}
}
