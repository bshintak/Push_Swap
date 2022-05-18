/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:48:19 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/18 15:27:15 by bshintak         ###   ########.fr       */
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

int	strlen_list_a(t_stack *stack)
{
	int		i;
	t_list	*aux;

	i = 0;
	if (!stack || !stack->a)
		return (0);
	aux = stack->a;
	while (aux != stack->a->prev)
	{
		aux = aux->next;
		i++;
	}
	return (i + 1);
}

int	strlen_list_b(t_stack *stack)
{
	int		i;
	int		tmp;
	t_list	*aux;

	i = 0;
	tmp = stack->b->content;
	aux = stack->b;
	if (!stack)
		return (0);
	while (aux->next->content != tmp)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

int	is_sorted(t_stack *stack)
{
	t_list	*tmp;
	t_list	*aux;

	tmp = stack->a;
	aux = stack->a->prev->next;
	while (tmp->next != aux)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
