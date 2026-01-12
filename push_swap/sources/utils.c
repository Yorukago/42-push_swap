/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:48:37 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/12 22:49:27 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_min(t_stack *stack)
{
	long	min;
	t_node	*min_node;
	t_node	*curr;

	if (!stack->start)
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

void	set_position(t_stack *stack)
{
	t_node	*node;
	int		i;
	int		median;

	if (!stack || !stack->start)
		return ;
	i = 0;
	node = stack->start;
	median = stack->size / 2;
	while (node)
	{
		node->index = i;
		if (i <= median)
			node->above_median = 1;
		else
			node->above_median = 0;
		node = node->next;
		i++;
	}
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

void	ft_error_exit(t_stack *a, t_stack *b)
{
	(void)a;
	(void)b;
	write(2, "Error\n", 6);
	exit(1);
}