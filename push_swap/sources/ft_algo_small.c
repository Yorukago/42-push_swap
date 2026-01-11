/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:23 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/11 23:49:25 by jzorreta         ###   ########.fr       */
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
