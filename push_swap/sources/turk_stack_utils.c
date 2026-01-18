/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_stack_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:53:42 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 22:58:48 by jzorreta         ###   ########.fr       */
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

void	free_stack(t_stack *stack)
{
	t_node	*curr;
	t_node	*tmp;

	if (!stack || !stack->start)
		return ;
	curr = stack->start;
	while (curr)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
	stack->start = NULL;
	stack->size = 0;
}

void	ft_stack_add_back(t_stack *stack, int value)
{
	t_node	*new;
	t_node	*last;

	new = ft_new_node(value);
	if (!new)
		ft_error_exit(stack, NULL);
	if (!stack->start)
	{
		stack->start = new;
	}
	else
	{
		last = stack->start;
		while (last->next)
			last = last->next;
		last->next = new;
		new->prev = last;
	}
	stack->size++;
}
