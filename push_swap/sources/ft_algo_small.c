/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:23 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/12 22:24:44 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->start->value;
	second = a->start->next->value;
	third = a->start->next->next->value;
	if (first > second && first > third)
	{
		ra(a);
		if (!is_sorted(a))
			sa(a);
	}
	else if (second > first && second > third)
	{
		rra(a);
		if (!is_sorted(a))
			sa(a);
	}
	else
	{
		if (!is_sorted(a))
			sa(a);
	}
}

void	ft_sort_five(t_stack *a, t_stack *b)
{
	while (a->size > 3)
	{
		set_position(a);
		finish_rotation(a, find_min(a), 'a');
		pb(a, b);
	}
	ft_sort_three(a);
	while (b->size > 0)
		pa(a, b);
}
