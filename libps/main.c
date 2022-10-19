/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 02:12:29 by bshintak          #+#    #+#             */
/*   Updated: 2022/10/17 17:31:05 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_list *a)
{
	t_list	*tmp;
	t_list	*aux;

	if (!a)
		return ;
	tmp = a;
	aux = a->next;
	ft_printf("%d\n", a->content);
	while (aux && aux != tmp)
	{
		ft_printf("%d\n", aux->content);
		aux = aux->next;
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

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (FALSE);
	if (checker_is_valid(argc, argv) == FALSE)
	{
		ft_printf("Error\n");
		return (FALSE);
	}
	if (checker_is_valid(argc, argv) == TRUE)
		push_swap(argc, argv);
}
