/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:49:13 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/22 19:04:05 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	make_list(int argc, char **argv, t_list *list)
// {
// 	int	i;

// 	i = 1;
// 	while (argc > 1)
// 	{
// 		ft_lstadd_back(list, ft_lstnew(ft_atoi(argv[i])));
// 		i++;
// 	}
// }

// void	print_list(t_list *stack)
// {
// 	int		i;
// 	t_list	*local;

// 	local = stack;
// 	i = 1;
// 	while (local != NULL)
// 	{
// 		ft_printf("/ %d ", local->content);
// 		local = local->next;
// 		i++;
// 	}
// }

void	push_swap(int argc, char **argv)
{
	int	i;
	t_stack	stacks;

	i = 1;
	stacks.a = NULL;
	while (argc > 2 && i < argc)
	{
		stacks.a = add_node(&stacks.a, ft_atoi(argv[i]));
		i++;
	}
	print_list(stacks.a);
	
}

// void	push_swap(int argc, char **argv)
// {
// 	int	i;
// 	int	*stack;
// 	t_stack	listas;
	
// 	i = 0;
// 	listas.b = NULL;
// 	if (argc < 3)
// 		return (FALSE);
// 	stack = malloc_stack(argc, argv);
// 	if (!stack)
// 		return (FALSE);
// 	if (checker_is_valid(argc, argv) == FALSE)
// 	{
// 		write (1, "Error\n", 6);
// 		return (FALSE);
// 	}
// 	while (i < argc - 1 && checker_is_valid(argc, argv))
// 	{
// 		if (argv[i] > argv[i + 1])
// 			ft_sa(argc);
// 		ft_printf("%d\n", stack[i++]);
// 	}
// 	make_list(argc, argv, listas.a);
// 	print_list(listas.a);
// 	free(stack);
// }
