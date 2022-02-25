/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rev_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:34:53 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/22 18:36:42 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack *stack)
{
	int	tmp;

	if (stack->a)
	{
		stack->a = stack->a->prev;
		ft_printf("rra\n");
	}
}

void	ft_rrb(t_stack *stack)
{
	if (stack->b)
	{
		stack->b = stack->b->prev;
		ft_printf("rrb\n");
	}
}

void	ft_rrr(t_stack *stack)
{
	if (stack->a && stack->b)
	{
		ft_rra(stack);
		ft_rrb(stack);
		ft_printf("rrr\n");
	}
}
