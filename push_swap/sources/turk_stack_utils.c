/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:53:42 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/25 15:04:16 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_stack *stack)
{
	long	min;
	t_node	*min_node;
	t_node	*curr;

	if (!stack || !stack->start)
		return (NULL);
	min = LONG_MAX;
	curr = stack->start;
	while (curr)
	{
		if (curr->value < min)
		{
			min = curr->value;
			min_node = curr;
		}
		curr = curr->next;
	}
	return (min_node);
}

t_node	*find_max(t_stack *stack)
{
	long	max;
	t_node	*max_node;
	t_node	*curr;

	if (!stack || !stack->start)
		return (NULL);
	max = LONG_MIN;
	curr = stack->start;
	while (curr)
	{
		if (curr->value > max)
		{
			max = curr->value;
			max_node = curr;
		}
		curr = curr->next;
	}
	return (max_node);
}

int	is_sorted(t_stack *stack)
{
	t_node	*current;

	if (!stack->start)
		return (1);
	current = stack->start;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
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
