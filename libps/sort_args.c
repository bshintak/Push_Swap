/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:23:37 by bshintak          #+#    #+#             */
/*   Updated: 2022/04/20 19:51:36 by bshintak         ###   ########.fr       */
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

void	first_smallest(t_stack *stack)
{
	int	small_value;

	small_value = smallest_arg(stack->a);
	while (small_value != 0)
	{
		if (small_value == 4)
		{
			move_rra(stack);
			break ;
		}
		else if (small_value == 3)
		{
			move_rra(stack);
			move_rra(stack);
			break ;
		}
		else
			move_ra(stack);
		small_value--;
	}
	move_pb(stack);
}

void	second_smallest(t_stack *stack)
{
	int	small_value;

	small_value = smallest_arg(stack->a);
	while (small_value != 0)
	{
		if (small_value == 3)
		{
			move_rra(stack);
			break ;
		}
		else
			move_ra(stack);
		small_value--;
	}
	move_pb(stack);
}

void	with_4_or_5_args(t_stack *stack)
{
	if (strlen_list_a(stack) > 4)
		first_smallest(stack);
	second_smallest(stack);
	with_3_args(stack);
	move_pa(stack);
	move_pa(stack);
}
