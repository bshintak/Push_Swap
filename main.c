/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:12:29 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/28 15:40:11 by bshintak         ###   ########.fr       */
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
	t_list	*mem;
	t_list	*tmp;

	mem = malloc(sizeof(t_list));
	if (!mem)
		return (0);
	mem->content = n;
	if (!*s)
	{
		*s = mem;
		mem->prev = *s;
		mem->next = *s;
		return (*s);
	}
	tmp = (*s)->prev;
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

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 3)
		return (FALSE);
	if (checker_is_valid(argc, argv) == FALSE)
	{
		write (2, "Error\n", 6);
		return (FALSE);
	}
	if (checker_is_valid(argc, argv) == TRUE)
		push_swap(argc, argv);
}
