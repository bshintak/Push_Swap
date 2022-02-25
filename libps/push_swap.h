/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:35:59 by bshintak          #+#    #+#             */
/*   Updated: 2022/02/22 18:50:48 by bshintak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define TRUE 1
# define FALSE 0

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack
{
	struct s_list *a;
	struct s_list *b;
}	t_stack;

void	push_swap(int argc, char **argv);
t_list	*add_node(t_list **s, int n);
void	print_list(t_list *a);

void	checker_args(int argc, t_list *stack);

int	checker_is_valid(int argc, char **argv);
int	*malloc_stack(int argc, char **argv);
void	ft_sa(t_stack *stack);
void	ft_sb(t_stack *stack);
void	ft_ss(t_stack *stack);

#endif
