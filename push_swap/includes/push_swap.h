/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 23:07:31 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/25 16:13:46 by jzorreta         ###   ########.fr       */
/*                                                                            */
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

// algo_small.c
void	ft_sort_three(t_stack *a);
void	ft_sort_five(t_stack *a, t_stack *b);

// parser.c
long	ft_atol(const char *str);
int		has_duplicate(t_stack *stack, int num);
int		is_number(char *str);
void	parse_and_add(t_stack *a, t_stack *b, char *str, char **split_to_free);

// push.c
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);

// reverse_rotate.c
void	ft_reverse_rotate(t_stack *stack);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *a, t_stack *b);

// rotate.c
void	ft_rotate(t_stack *stack);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);

// split.c
int		ft_count_words(const char *s, char c);
void	mem_free(char **words, int j);
void	free_split(char **split);
char	*word_splitter(const char *s, char c, char **words, int j);
char	**ft_split(char const *s, char c);

// stack.c
void	ft_init_stack(t_stack *stack);
int		ft_pop(t_stack *stack);
void	ft_push(t_stack *stack, int value);
t_node	*ft_new_node(int value);
void	ft_error_exit(t_stack *a, t_stack *b);

// swap.c
void	ft_swap(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);

// turk_algo.c
void	ft_turk_sort(t_stack *a, t_stack *b);

// turk_helpers.c
t_node	*find_target_in_b(t_stack *b, int val_a);

// turk_init.c
void	init_nodes_a(t_stack *a, t_stack *b);
void	set_position(t_stack *stack);
void	set_target_a(t_stack *a, t_stack *b);
void	set_cost_a(t_stack *a, t_stack *b);
void	set_cheapest(t_stack *stack);

// turk_push2a.c
void	init_nodes_b(t_stack *a, t_stack *b);
void	set_target_b(t_stack *a, t_stack *b);
void	move_b_to_a(t_stack *a, t_stack *b);
void	move_a_to_b(t_stack *a, t_stack *b);

// turk_stack_utils.c
t_node	*find_min(t_stack *stack);
t_node	*find_max(t_stack *stack);
int		is_sorted(t_stack *stack);
void	free_stack(t_stack *stack);
void	ft_stack_add_back(t_stack *stack, int value);

// turk_utils.c
void	rotate_both(t_stack *a, t_stack *b, t_node *cheapest);
void	rev_rotate_both(t_stack *a, t_stack *b, t_node *cheapest);
void	finish_rotation(t_stack *stack, t_node *top_node, char stack_name);
void	min_on_top(t_stack *a);
t_node	*get_cheapest(t_stack *stack);

int		starter(int argc, char **argv, t_stack *a, t_stack *b);

#endif