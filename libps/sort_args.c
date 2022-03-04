/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:23:37 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/03 12:43:59 by bshintak         ###   ########.fr       */
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
	if (stack->a->content > stack->a->next->content)
		move_sa(stack);
	if (stack->a->prev->content < stack->a->content)
		move_ra(stack);
}
