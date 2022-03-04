/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:17:05 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/28 14:42:08 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sa(t_stack *stack)
{
	int	tmp;

	if (stack->a)
	{
		tmp = stack->a->content;
		stack->a->content = stack->a->next->content;
		stack->a->next->content = tmp;
		ft_printf("sa\n");
	}
}

void	move_sb(t_stack *stack)
{
	int	tmp;

	if (stack->b)
	{
		tmp = stack->b->content;
		stack->b->content = stack->b->next->content;
		stack->b->next->content = tmp;
		ft_printf("sb\n");
	}
}

void	move_ss(t_stack *stack)
{
	if (stack->a && stack->b)
	{
		move_sa(stack);
		move_sb(stack);
		ft_printf("ss\n");
	}
}
