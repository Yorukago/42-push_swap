/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   push_swap.h										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jzorreta <jzorreta@.42lisboa.com>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/01/11 19:57:36 by jzorreta		  #+#	#+#			 */
/*   Updated: 2026/01/11 21:28:05 by jzorreta		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_node
{
	int				value;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;
	struct s_node	*target_node;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*start;
	int		size;
}	t_stack;

void	ft_init_stack(t_stack *stack);
int		ft_pop(t_stack *stack);
void	ft_push(t_stack *stack, int value);
void	ft_stack_add_back(t_stack *stack, int value);
t_node	*ft_new_node(int value);

void	ft_swap(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);

void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);

void	ft_rotate(t_stack *stack);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);

void	ft_reverse_rotate(t_stack *stack);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *a, t_stack *b);

long	ft_atoi_long(const char *str, t_stack *a);
int		has_duplicate(t_stack *stack, int num);
int		ft_is_digit(char c);

void	ft_error_exit(t_stack *a, t_stack *b);
int		is_sorted(t_stack *stack);

void	ft_sort_three(t_stack *a);

void	print_stacks(t_stack *a, t_stack *b);

#endif
