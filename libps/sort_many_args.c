/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:20:54 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/10 14:37:09 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_push(t_stack *stack)
{
	biggest_arg(stack);
	smallest_arg(stack);
}

void	checker_to_sort(t_stack *stack)
{
	int	i;
	int	checker;

	checker = NULL;
	checker = check_b_sort(stack->b);
	if (checker == NULL)
	{
		while (i < strlen_list(stack))
		{
			move_pa(stack);
			i++;
		}
	}
	else
		end_push(stack);
}
