/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:44:45 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/17 18:25:42 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_size(t_list *stack)
{
	t_list	*aux;
	int		tmp;
	int		i;

	i = 0;
	if (!stack)
		return (0);
	tmp = stack->content;
	aux = stack;
	while (aux->next->content != tmp)
	{
		i++;
		aux = aux->next;
	}
	return (i);
}

int	verif_to_b(t_stack *stack, int counter, int size)
{
	if (counter > (size / 2))
	{
		counter = size - counter;
		while (counter != 0)
		{
			counter--;
			move_rra(stack);
		}
	}
	else
	{
		while (counter != 0)
		{
			counter--;
			move_ra(stack);
		}
	}
	move_pb(stack);
	return (1);
}

void	check_limits_num_of_chks(t_stack *stack, t_chunk *chk, t_pos pos)
{
	t_list	*tmp;
	int		check;
	int		counter;
	int		aux;

	check = 0;
	counter = 0;
	tmp = stack->a;
	aux = stack->a->content;
	while (check == 0 && tmp->next->content != aux)
	{
		if (chk[pos.x_1].num_min <= tmp->content
			&& chk[pos.x_1].num_max >= tmp->content)
			check = verif_to_b(stack, counter, check_size(stack->a));
		else if (chk[pos.x_2].num_min <= tmp->content
			&& chk[pos.x_2].num_max >= tmp->content)
		{
			check = verif_to_b(stack, counter, check_size(stack->a));
			if (stack->b->next != NULL)
				move_rb(stack);
		}
		else
			counter++;
		tmp = tmp->next;
	}
}

void	push_to_b(t_stack *stack, t_chunk *chk, int num_chks)
{
	t_pos	pos;
	int		i;
	int		j;
	int		size_two_chks;

	i = 0;
	while (i < (num_chks / 2))
	{
		j = 0;
		pos.x_1 = num_chks / 2 + i;
		pos.x_2 = num_chks / 2 - i - 1;
		size_two_chks = chk[pos.x_1].place_max - chk[pos.x_1].place_min + 1;
		size_two_chks += chk[pos.x_2].place_max - chk[pos.x_2].place_min + 1;
		while (j < size_two_chks)
		{
			check_limits_num_of_chks(stack, chk, pos);
			j++;
		}
		i++;
	}
}
