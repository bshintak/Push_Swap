/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:23:37 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/09 13:05:27 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	with_2_args(t_stack *stack)
{
	if (stack->a->content > stack->a->next->content)
		move_sa(stack);
}

void	with_3_args(t_stack *stack)
{
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content < stack->a->prev->content)
		return ;
	if (stack->a->content < stack->a->prev->content)
		move_sa(stack);
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content > stack->a->prev->content)
		move_sa(stack);
	if (stack->a->next->content > stack->a->prev->content
		&& !(stack->a->content < stack->a->prev->content))
		move_rra(stack);
	if (stack->a->content < stack->a->next->content
		&& stack->a->next->content > stack->a->prev->content)
		move_ra(stack);
	if (stack->a->content > stack->a->next->content
		&& stack->a->next->content < stack->a->prev->content)
		move_ra(stack);
}

void	with_4_or_5_args(t_stack *stack)
{
	int	small_value;

	small_value = smallest_arg(stack->a);
	while (small_value != 0)
	{
		move_ra(stack);
		small_value--;
	}
	move_pb(stack);
	small_value = smallest_arg(stack->a);
	while (small_value != 0)
	{
		move_ra(stack);
		small_value--;
	}
	move_pb(stack);
	if (stack->a && stack->a->next && stack->a->next->next)
		with_3_args(stack);
	if (stack->a && stack->a->next)
		with_2_args(stack);
	move_pa(stack);
	move_pa(stack);
}
