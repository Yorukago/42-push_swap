/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:52:05 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 23:13:33 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack *a, t_stack *b, t_node *cheapest)
{
	while (a->start != cheapest && b->start != cheapest->target_node)
		rr(a, b);
	set_position(a);
	set_position(b);
}

void	rev_rotate_both(t_stack *a, t_stack *b, t_node *cheapest)
{
	while (a->start != cheapest && b->start != cheapest->target_node)
		rrr(a, b);
	set_position(a);
	set_position(b);
}

void	finish_rotation(t_stack *stack, t_node *top_node, char stack_name)
{
	while (stack->start != top_node)
	{
		if (stack_name == 'a')
		{
			if (top_node->above_median)
				ra(stack);
			else
				rra(stack);
		}
		else if (stack_name == 'b')
		{
			if (top_node->above_median)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	min_on_top(t_stack *a)
{
	t_node	*min_node;

	min_node = find_min(a);
	if (min_node->above_median)
	{
		while (a->start != min_node)
			ra(a);
	}
	else
	{
		while (a->start != min_node)
			rra(a);
	}
}

t_node	*get_cheapest(t_stack *stack)
{
	t_node	*curr;

	curr = stack->start;
	while (curr)
	{
		if (curr->cheapest)
			return (curr);
		curr = curr->next;
	}
	return (NULL);
}
