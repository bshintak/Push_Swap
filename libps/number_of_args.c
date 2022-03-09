/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_of_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:07:54 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/07 16:53:56 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checker_args(int argc, t_stack *stack)
{
	if (argc == 3)
		with_2_args(stack);
	else if (argc == 4)
		with_3_args(stack);
	else if (argc == 5 || argc == 6)
		with_4_or_5_args(stack);
	else
		return ;
}
