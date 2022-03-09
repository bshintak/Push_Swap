/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:48:19 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/09 12:57:29 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_arg(t_list *stack)
{
	t_list	*smallest;
	t_list	*tmp;
	int		i;
	
	i = 0;
	smallest = stack;
	tmp = stack->next;
	while (tmp != stack)
	{
		if (smallest->content > tmp->content)
			smallest = tmp;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp != smallest)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	biggest_arg(t_list *stack)
{
	t_list	*biggest;
	t_list	*tmp;
	int		i;
	
	i = 0;
	biggest = stack;
	tmp = stack->next;
	while (tmp != stack)
	{
		if (biggest->content < tmp->content)
			biggest = tmp;
		tmp = tmp->next;
	}
	tmp = stack;
	while (tmp != biggest)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

int	strlen_list(t_stack *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->a->content;
	if (!stack)
		return (0);
	while (stack->a->next->content != tmp)
	{
		stack->a = stack->a->next;
		i++;
	}
	return (i);
}

// int	aux_5_args(t_stack *stack)
