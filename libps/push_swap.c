/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:49:13 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/28 15:45:16 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	int		i;
	t_stack	stacks;

	i = 1;
	stacks.a = NULL;
	while (argc > 2 && i < argc)
	{
		stacks.a = add_node(&stacks.a, ft_atoi(argv[i]));
		i++;
	}
	checker_args(argc, &stacks);
	print_list(stacks.a);
}
