/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:48:37 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/11 23:48:41 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error_exit(t_stack *a, t_stack *b)
{
	(void)a;
	(void)b;
	write(2, "Error\n", 6);
	exit(1);
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
