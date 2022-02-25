/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:12:29 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/25 15:12:07 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libps/push_swap.h"

void	print_list(t_list *a)
{
	t_list	*tmp;
	t_list	*i;

	if (!a)
		return ;
	tmp = a;
	i = a->next;
	ft_printf("%d\n", a->content);
	while (i && i != tmp)
	{
		ft_printf("%d\n", i->content);
		i = (i->next);
	}
}

t_list	*add_node(t_list **s, int n)
{
	t_list *mem;
	t_list	*tmp;

	mem = malloc(sizeof(t_list));
	if (!mem)
		return (0);
	mem->content = n;
	if (!*s)
	{
		*s = mem;
		mem->prev = NULL;
		mem->next = NULL;
		return (*s);
	}
	if ((*s)->prev)	
		tmp = (*s)->prev;
	else
		tmp = (*s);
	(*s)->prev = mem;
	mem->prev = tmp;
	tmp->next = mem;
	mem->next = (*s);
	return (*s);
}

/* (*s)->prev --- ultimo da lista
	vou passar pro tmp
	mem --- novo da lista
	vou passar pro ultimo
	mem->prev --- antigo ultimo
	jogo o tmp para a penultima posição
	para linkar as listas :
	tmp->next --- novo ultimo (mem)
	mem->next --- novo primeiro (*s) */
	
// void		stack_del_top(t_list **frame)
// {
// 	t_list		*top;
// 	t_list		*tmp;

// 	tmp = NULL;
// 	top = *frame;
// 	if (top)
// 	{
// 		if (top->next == NULL)
// 		{
// 			free(top);
// 			top = NULL;
// 		}
// 		else
// 		{
// 			tmp = top;
// 			top = (top)->next;
// 			tmp->prev->next = top;
// 			(top)->prev = tmp->prev;
// 			free(tmp);
// 		}
// 	}
// }

// void		stack_add_top(t_list **frame, int num)
// {
// 	t_list		*top;
// 	t_list		*tmp;

// 	tmp = NULL;
// 	top = *frame;
// 	if (top)
// 	{
// 		if (!(add_node(frame, num)))
// 			write(2, "Error\n", 6);
// 		tmp->next = top;
// 		tmp->prev = (top)->prev;
// 		(top)->prev = tmp;
// 		tmp->prev->next = tmp;
// 		tmp->content = num;
// 		top = (top)->prev;
// 	}
// 	else
// 	{
// 		if (!(add_node(frame, num)))
// 			write(2, "Error\n", 6);
// 		(top)->next = top;
// 		(top)->prev = top;
// 		(top)->content = num;
// 	}
// }

int main(void)
{
	t_stack stacks;
	// int	i;
	
	// i = 0;
	// if (argc < 3)
	// 	return (FALSE);
	// if (checker_is_valid(argc, argv) == FALSE)
	// {
	// 	write (2, "Error\n", 6);
	// 	return (FALSE);
	// }
	// if (checker_is_valid(argc, argv) == TRUE)
	// 	push_swap(argc, argv);

	stacks.a = NULL;
	stacks.b = NULL;
	stacks.a = add_node(&stacks.a, 9);
	stacks.a = add_node(&stacks.a, 8);
	stacks.a = add_node(&stacks.a, 7);
	stacks.a = add_node(&stacks.a, 6);

	stacks.b = add_node(&stacks.b, 1);
	stacks.b = add_node(&stacks.b, 2);
	stacks.b = add_node(&stacks.b, 3);
	stacks.b = add_node(&stacks.b, 4);
	
	t_list	*tmp;
	
	ft_printf("---ROTATE_STACK_A---(9 8 7 6)\n");
	stacks.a = stacks.a->next;
	print_list(stacks.a);
	ft_printf("---REV_ROTATE_STACK_A---(8 7 6 9)\n");
	stacks.a = stacks.a->prev;
	print_list(stacks.a);
	ft_printf("---ROTATE_STACK_B---(1 2 3 4)\n");
	stacks.b = stacks.b->next;
	print_list(stacks.b);
	ft_printf("---REV_ROTATE_STACK_A---(2 3 4 1)\n");
	stacks.b = stacks.b->prev;
	print_list(stacks.b);
	ft_printf("---PUSH_STACK_A---(a -> 9 8 7 6) (b -> 1 2 3 4)\n");
	stacks.b->prev->next = stacks.b->next;
	stacks.b->next->prev = stacks.b->prev;
	tmp = stacks.b;
	stacks.b = stacks.b->next;
	stacks.a->prev->next = tmp;
	tmp->prev = stacks.a->prev;
	tmp->next = stacks.a;
	stacks.a->prev = tmp;
	stacks.a = stacks.a->prev;
	ft_printf("stack.a\n");
	print_list(stacks.a);
	ft_printf("stack.b\n");
	print_list(stacks.b);
	ft_printf("---PUSH_STACK_B---(a -> 1 9 8 7 6) (b -> 2 3 4)\n");
	stacks.a->prev->next = stacks.a->next;
	stacks.a->next->prev = stacks.a->prev;
	tmp = stacks.a;
	stacks.a = stacks.a->next;
	stacks.b->prev->next = tmp;
	tmp->prev = stacks.b->prev;
	tmp->next = stacks.b;
	stacks.b->prev = tmp;
	stacks.b = stacks.b->prev;
	ft_printf("stack.a\n");
	print_list(stacks.a);
	ft_printf("stack.b\n");
	print_list(stacks.b);
}
