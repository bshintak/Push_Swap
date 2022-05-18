/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshintak <bshintak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:35:59 by bshintak          #+#    #+#             */
/*   Updated: 2022/05/18 12:36:23 by bshintak         ###   ########.fr       */
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
	struct s_list	*a;
	struct s_list	*b;
}				t_stack;

typedef struct s_chunk
{
	int				num_max;
	int				num_min;
	int				place_max;
	int				place_min;
	int				x_1;
	int				x_2;
}				t_chunk;

typedef struct s_pos
{
	int				x_1;
	int				x_2;
}				t_pos;

/*	SMALLEST AND BIGGEST ARGS	*/
int		smallest_arg(t_list *stack);
int		biggest_arg(t_list *stack);

/*	LEN OF LIST	*/
int		strlen_list_a(t_stack *stack);
int		strlen_list_b(t_stack *stack);

/*	VALID ARGS	*/
int		checker_is_valid(int argc, char **argv);

int		check_b_sort(t_stack *stack);
int		half_list(t_stack *stack);
int		is_sorted(t_stack *stack);
void	first_smallest(t_stack *stack);
void	second_smallest(t_stack *stack);
void	push_swap(int argc, char **argv);
void	num_args(int argc, t_stack *stack);
void	org_stack(t_stack *stack);

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
void	all_args(t_stack *stack);

void	sort_long(t_stack *stack, int argc);
int		*array_sort(t_stack *stack, int argc);
int		choose_chunk(int *array, int argc, t_chunk *list_chk);
void	push_to_b(t_stack *stack, t_chunk *chk, int num_chks);
void	check_is_sorted(t_stack *stack, int argc);
int		check_size(t_list *stack);
void	push_to_a(t_stack *stack);

#endif
