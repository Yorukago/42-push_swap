/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:52:05 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/25 15:04:19 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

t_node	*find_target_in_b(t_stack *b, int val_a)
{
	t_node	*curr_b;
	t_node	*target;
	long	best_idx;

	target = NULL;
	best_idx = LONG_MIN;
	curr_b = b->start;
	while (curr_b)
	{
		if (curr_b->value < val_a && curr_b->value > best_idx)
		{
			best_idx = curr_b->value;
			target = curr_b;
		}
		curr_b = curr_b->next;
	}
	if (best_idx == LONG_MIN)
		return (find_max(b));
	return (target);
}
