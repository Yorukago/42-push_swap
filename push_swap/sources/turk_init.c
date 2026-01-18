/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:49:46 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 23:50:39 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_nodes_a(t_stack *a, t_stack *b)
{
	set_position(a);
	set_position(b);
	set_target_a(a, b);
	set_cost_a(a, b);
	set_cheapest(a);
}

void	set_position(t_stack *stack)
{
	int		i;
	int		median;
	t_node	*curr;

	if (!stack || !stack->start)
		return ;
	i = 0;
	median = stack->size / 2;
	curr = stack->start;
	while (curr)
	{
		curr->index = i;
		if (i <= median)
			curr->above_median = true;
		else
			curr->above_median = false;
		curr = curr->next;
		i++;
	}
}

void	set_target_a(t_stack *a, t_stack *b)
{
	t_node	*curr_a;

	curr_a = a->start;
	while (curr_a)
	{
		curr_a->target_node = find_target_in_b(b, curr_a->value);
		curr_a = curr_a->next;
	}
}

void	set_cost_a(t_stack *a, t_stack *b)
{
	t_node	*curr_a;
	int		size_a;
	int		size_b;

	curr_a = a->start;
	size_a = a->size;
	size_b = b->size;
	while (curr_a)
	{
		curr_a->push_cost = curr_a->index;
		if (!(curr_a->above_median))
			curr_a->push_cost = size_a - (curr_a->index);
		if (curr_a->target_node->above_median)
			curr_a->push_cost += curr_a->target_node->index;
		else
			curr_a->push_cost += size_b - (curr_a->target_node->index);
		curr_a = curr_a->next;
	}
}

void	set_cheapest(t_stack *stack)
{
	long	cheapest_value;
	t_node	*cheapest_node;
	t_node	*curr;

	if (!stack || !stack->start)
		return ;
	cheapest_value = LONG_MAX;
	curr = stack->start;
	while (curr)
	{
		curr->cheapest = false;
		if (curr->push_cost < cheapest_value)
		{
			cheapest_value = curr->push_cost;
			cheapest_node = curr;
		}
		curr = curr->next;
	}
	cheapest_node->cheapest = true;
}
