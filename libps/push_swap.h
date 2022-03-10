/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:35:59 by bshintak          #+#    #+#             */
/*   Updated: 2022/03/10 14:26:44 by bshintak         ###   ########.fr       */
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

typedef struct	s_stack
{
	struct s_list	*a;
	struct s_list	*b;
}				t_stack;

typedef struct	s_chunk
{
	int				num_max;
	int				num_min;
	int				place_max;
	int				place_min;
}				t_chunk;

int		smallest_arg(t_list *stack);
int		biggest_arg(t_list *stack);
int		strlen_list(t_stack *stack);
int		half_list(t_stack *stack);
int		check_b_sort(t_stack *stack);
void	push_swap(int argc, char **argv);
void	checker_args(int argc, t_stack *stack);
int		checker_is_valid(int argc, char **argv);

/*	MAKE LIST	*/
void	print_list(t_list *a);
t_list	*add_node(t_list **s, int n);

/*	MOVES	*/
void	move_sa(t_stack *stack);
void	move_sb(t_stack *stack);
void	move_ss(t_stack *stack);
void	move_ra(t_stack *stack);
void	move_rb(t_stack *stack);
void	move_rr(t_stack *stack);
void	move_rra(t_stack *stack);
void	move_rrb(t_stack *stack);
void	move_rrr(t_stack *stack);
void	move_pa(t_stack *stack);
void	move_pb(t_stack *stack);

/*	NUMBER OF ARGS	*/
void	with_2_args(t_stack *stack);
void	with_3_args(t_stack *stack);
void	with_4_or_5_args(t_stack *stack);

#endif
