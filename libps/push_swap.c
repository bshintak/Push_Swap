/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:49:13 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/09 13:04:36 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	int		i;
	t_stack	stacks;

	i = 1;
	stacks.a = NULL;
	stacks.b = NULL;
	while (argc > 2 && i < argc)
	{
		stacks.a = add_node(&stacks.a, ft_atoi(argv[i]));
		i++;
	}
	while (argc > 2 && i < argc)
	{
		stacks.b = add_node(&stacks.b, ft_atoi(argv[i]));
		i++;
	}
	checker_args(argc, &stacks);
	// ft_printf("stack_a\n");
	// print_list(stacks.a);
	// ft_printf("stack_b\n");
	// print_list(stacks.b);
}
