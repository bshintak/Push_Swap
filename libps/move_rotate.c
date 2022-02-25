/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:21:27 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/22 18:33:26 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack *stack)
{
	int	tmp;

	if (stack->a)
	{
		stack->a = stack->a->next;
		ft_printf("ra\n");
	}
}

void	ft_rb(t_stack *stack)
{
	if (stack->b)
	{
		stack->b = stack->b->next;
		ft_printf("rb\n");
	}
}

void	ft_rr(t_stack *stack)
{
	if (stack->a && stack->b)
	{
		ft_ra(stack);
		ft_rb(stack);
		ft_printf("rr\n");
	}
}

// void	ft_ra(t_stack *stack)
// {
// 	t_stack	*last;
// 	int	tmp;
	
// 	last = stack;
// 	while ((last)->a)
// 	{
// 		last->a = last->a->next;
// 	}
// 	if (stack->a)
// 	{
// 		tmp = stack->a->content;
// 		stack->a->content = last->a->content;
// 		last->a->content = tmp;
// 		ft_printf("ra\n");
// 	}
// }

// void	ft_rb(t_stack *stack)
// {
// 	int	tmp;

// 	if (stack->b)
// 	{
// 		tmp = stack->b->content;
// 		stack->b->content = stack->b->next;
// 		stack->b->next = tmp;
// 		ft_printf("rb\n");
// 	}
// }
