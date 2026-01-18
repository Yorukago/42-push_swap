/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_push_to_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:59:09 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 23:56:13 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_nodes_b(t_stack *a, t_stack *b)
{
	set_position(a);
	set_position(b);
	set_target_b(a, b);
}

t_node	*find_target_in_a(t_stack *a, int val_b)
{
	t_node	*curr_a;
	t_node	*target;
	long	best_idx;

	target = NULL;
	best_idx = LONG_MAX;
	curr_a = a->start;
	while (curr_a)
	{
		if (curr_a->value > val_b && curr_a->value < best_idx)
		{
			best_idx = curr_a->value;
			target = curr_a;
		}
		curr_a = curr_a->next;
	}
	if (best_idx == LONG_MAX)
		return (find_min(a));
	return (target);
}

void	set_target_b(t_stack *a, t_stack *b)
{
	t_node	*curr_b;

	curr_b = b->start;
	while (curr_b)
	{
		curr_b->target_node = find_target_in_a(a, curr_b->value);
		curr_b = curr_b->next;
	}
}

void	move_b_to_a(t_stack *a, t_stack *b)
{
	finish_rotation(a, b->start->target_node, 'a');
	pa(a, b);
}

void	move_a_to_b(t_stack *a, t_stack *b)
{
	t_node	*cheapest;

	cheapest = get_cheapest(a);
	if (cheapest->above_median
		&& cheapest->target_node->above_median)
		rotate_both(a, b, cheapest);
	else if (!(cheapest->above_median)
		&& !(cheapest->target_node->above_median))
		rev_rotate_both(a, b, cheapest);
	finish_rotation(a, cheapest, 'a');
	finish_rotation(b, cheapest->target_node, 'b');
	pb(a, b);
}
