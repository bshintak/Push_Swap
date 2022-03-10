/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:47:22 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/09 16:26:53 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pa(t_stack *stack)
{
	t_list	*tmp;

	if (stack->b == NULL)
		return ;
	ft_printf("pa\n");
	tmp = stack->b;
	if (stack->b != stack->b->next && stack->b->next != 0)
	{
		stack->b->prev->next = stack->b->next;
		stack->b->next->prev = stack->b->prev;
		stack->b = stack->b->next;
	}
	else
		stack->b = NULL;
	tmp->next = stack->a;
	if (stack->a == NULL)
	{
		stack->a = tmp;
		tmp->prev = stack->a;
		return ;
	}
	stack->a->prev->next = tmp;
	tmp->prev = stack->a->prev;
	stack->a->prev = tmp;
	stack->a = stack->a->prev;
}

void	move_pb(t_stack *stack)
{
	t_list	*tmp;

	if (stack->a == NULL)
		return ;
	ft_printf("pb\n");
	tmp = stack->a;
	if (stack->a != stack->a->next)
	{
		stack->a->prev->next = stack->a->next;
		stack->a->next->prev = stack->a->prev;
		stack->a = stack->a->next;
	}
	else
		stack->a = NULL;
	tmp->next = stack->b;
	if (stack->b == NULL)
	{
		stack->b = tmp;
		tmp->prev = stack->b;
		return ;
	}
	stack->b->prev->next = tmp;
	tmp->prev = stack->b->prev;
	stack->b->prev = tmp;
	stack->b = stack->b->prev;
}
