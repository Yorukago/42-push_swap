/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:12 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/25 15:03:54 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	val;

	if (!stack_b || !stack_b->start)
		return ;
	val = ft_pop(stack_b);
	ft_push(stack_a, val);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	val;

	if (!stack_a || !stack_a->start)
		return ;
	val = ft_pop(stack_a);
	ft_push(stack_b, val);
	write(1, "pb\n", 3);
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
