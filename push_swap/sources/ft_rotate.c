/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:01 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/24 10:16:39 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || stack->size < 2)
		return ;
	first = stack->start;
	last = stack->start;
	stack->start = first->next;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_stack *stack_a)
{
	ft_rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	ft_rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	write(1, "rr\n", 3);
}

void	rotate_both(t_stack *a, t_stack *b, t_node *cheapest)
{
	while (a->start != cheapest && b->start != cheapest->target_node)
		rr(a, b);
	set_position(a);
	set_position(b);
}
