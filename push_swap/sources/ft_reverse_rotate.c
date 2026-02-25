/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:07 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/24 10:16:50 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack *stack)
{
	t_node	*last;
	t_node	*before_last;

	if (!stack || stack->size < 2)
		return ;
	last = stack->start;
	before_last = NULL;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = stack->start;
	stack->start = last;
}

void	rra(t_stack *stack_a)
{
	ft_reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	ft_reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	write(1, "rrr\n", 4);
}

void	rev_rotate_both(t_stack *a, t_stack *b, t_node *cheapest)
{
	while (a->start != cheapest && b->start != cheapest->target_node)
		rrr(a, b);
	set_position(a);
	set_position(b);
}
