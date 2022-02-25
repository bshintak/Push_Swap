/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:17:05 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/22 16:49:24 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack *stack)
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

void	ft_sb(t_stack *stack)
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

void	ft_ss(t_stack *stack)
{
	if (stack->a && stack->b)
	{
		ft_sa(stack);
		ft_sb(stack);
		ft_printf("ss\n");
	}
}
