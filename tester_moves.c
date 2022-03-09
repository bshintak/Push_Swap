/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_moves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:13:22 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/07 11:39:56 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "./libps/push_swap.h"

// int main(void)
// {
// 	t_stack stacks;

// 	stacks.a = NULL;
// 	stacks.b = NULL;
// 	stacks.a = add_node(&stacks.a, 9);
// 	stacks.a = add_node(&stacks.a, 8);
// 	stacks.a = add_node(&stacks.a, 7);
// 	stacks.a = add_node(&stacks.a, 6);

// 	stacks.b = add_node(&stacks.b, 1);
// 	stacks.b = add_node(&stacks.b, 2);
// 	stacks.b = add_node(&stacks.b, 3);
// 	stacks.b = add_node(&stacks.b, 4);

// 	t_list	*tmp;

// 	// ft_printf("---SWAP_A---(9 8 7 6)\n");
// 	// tmp = stacks.a->content;
// 	// stacks.a->content = stacks.a->next->content;
// 	// stacks.a->next->content = tmp;
// 	// print_list(stacks.a);

// 	// ft_printf("---SWAP_B---(1 2 3 4)\n");
// 	// tmp = stacks.b->content;
// 	// stacks.b->content = stacks.b->next->content;
// 	// stacks.b->next->content = tmp;
// 	// print_list(stacks.b);

// 	ft_printf("---ROTATE_STACK_A---(9 8 7 6)\n");
// 	stacks.a = stacks.a->next;
// 	ft_printf("stacks.a\n");
// 	print_list(stacks.a);

// 	ft_printf("---REV_ROTATE_STACK_A---(8 7 6 9)\n");
// 	stacks.a = stacks.a->prev;
// 	ft_printf("stacks.a\n");
// 	print_list(stacks.a);

// 	ft_printf("---ROTATE_STACK_B---(1 2 3 4)\n");
// 	stacks.b = stacks.b->next;
// 	ft_printf("stacks.b\n");
// 	print_list(stacks.b);

// 	ft_printf("---REV_ROTATE_STACK_B---(2 3 4 1)\n");
// 	stacks.b = stacks.b->prev;
// 	ft_printf("stacks.b\n");
// 	print_list(stacks.b);

// 	ft_printf("---PUSH_STACK_A---(a -> 9 8 7 6) (b -> 1 2 3 4)\n");
// 	if (stacks.b == NULL)
// 		return (0);
// 	tmp = stacks.b;
// 	if (stacks.b != stacks.b->next)
// 	{
// 		stacks.b->prev->next = stacks.b->next;
// 		stacks.b->next->prev = stacks.b->prev;
// 		stacks.b = stacks.b->next;
// 	}
// 	else
// 		stacks.b = NULL;
// 	tmp->next = stacks.a;
// 	if (stacks.a == NULL)
// 	{
// 		stacks.a = tmp;
// 		tmp->prev = stacks.a;
// 	}
// 	else
// 	{
// 		stacks.a->prev->next = tmp;
// 		tmp->prev = stacks.a->prev;
// 		stacks.a->prev = tmp;
// 		stacks.a = stacks.a->prev;
// 	}
// 	ft_printf("stacks.a\n");
// 	print_list(stacks.a);
// 	ft_printf("stacks.b\n");
// 	print_list(stacks.b);

// 	ft_printf("---PUSH_STACK_B---(a ->1 9 8 7 6) (b -> 2 3 4)\n");
// 	if (stacks.a == NULL)
// 		return (0);
// 	tmp = stacks.a;
// 	if (stacks.a != stacks.a->next)
// 	{
// 		stacks.a->prev->next = stacks.a->next;
// 		stacks.a->next->prev = stacks.a->prev;
// 		stacks.a = stacks.a->next;
// 	}
// 	else
// 		stacks.a = NULL;
// 	tmp->next = stacks.b;
// 	if (stacks.b == NULL)
// 	{
// 		stacks.b = tmp;
// 		tmp->prev = stacks.b;
// 	}
// 	else
// 	{
// 		stacks.b->prev->next = tmp;
// 		tmp->prev = stacks.b->prev;
// 		stacks.b->prev = tmp;
// 		stacks.b = stacks.b->prev;
// 	}
// 	ft_printf("stacks.a\n");
// 	print_list(stacks.a);
// 	ft_printf("stacks.b\n");
// 	print_list(stacks.b);
// }
