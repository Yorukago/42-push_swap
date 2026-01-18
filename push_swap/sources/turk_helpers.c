/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 23:50:51 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 23:51:01 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
