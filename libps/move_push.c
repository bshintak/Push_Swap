/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 10:47:22 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/25 14:39:06 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack *stack)
{
	t_list	*tmp;

	stack->b->prev->next = stack->b->next;
	stack->b->next->prev = stack->b->prev;
	tmp = stack->b;
	stack->b = stack->b->next;
	stack->a->prev->next = tmp;
	tmp->prev = stack->a->prev;
	tmp->next = stack->a;
	stack->a->prev = tmp;
	stack->a = stack->a->prev;
	ft_printf("pa\n");
}

void	ft_pb(t_stack *stack)
{
	t_list	*tmp;

	stack->a->prev->next = stack->a->next;
	stack->a->next->prev = stack->a->prev;
	tmp = stack->a;
	stack->a = stack->a->next;
	stack->b->prev->next = tmp;
	tmp->prev = stack->b->prev;
	tmp->next = stack->b;
	stack->b->prev = tmp;
	stack->b = stack->b->prev;
	ft_printf("pb\n");
}
