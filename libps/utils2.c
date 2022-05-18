/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:10:18 by bshintak          #+#    #+#             */
/*   Updated: 2022/04/20 17:38:31 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	check_sort(t_stack *stack)
// {
// 	t_list	*tmp;
// 	tmp = stack->a;
// 	while (tmp != stack->a->prev)
// 	{
// 		if (tmp->content < tmp->next->content)
// 			tmp = tmp->next;
// 		else
// 			break ;
// 	}
// }

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
