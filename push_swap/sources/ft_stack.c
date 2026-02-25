/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:48:57 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/25 14:30:55 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_stack *stack)
{
	stack->size = 0;
	stack->start = NULL;
}

t_node	*ft_new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->next = NULL;
	node->prev = NULL;
	return (node);
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

void	ft_error_exit(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}
