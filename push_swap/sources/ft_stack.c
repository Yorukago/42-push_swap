/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:48:57 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 23:01:47 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_stack *stack)
{
	stack->size = 0;
	stack->start = NULL;
}

void	ft_push(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		ft_error_exit(stack, NULL);
	new_node->value = value;
	new_node->next = stack->start;
	new_node->prev = NULL;
	if (stack->start)
		stack->start->prev = new_node;
	stack->start = new_node;
	stack->size++;
}

int	ft_pop(t_stack *stack)
{
	t_node	*temp;
	int		popped_val;

	if (!stack->start)
		return (0);
	temp = stack->start;
	popped_val = temp->value;
	stack->start = temp->next;
	if (stack->start)
		stack->start->prev = NULL;
	free(temp);
	stack->size--;
	return (popped_val);
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

void	ft_error_exit(t_stack *a, t_stack *b)
{
	(void)a;
	(void)b;
	write(2, "Error\n", 6);
	exit(1);
}
