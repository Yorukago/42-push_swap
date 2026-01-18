/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 22:38:45 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/17 23:01:06 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_turk_sort(t_stack *a, t_stack *b)
{
	int	len_a;

	len_a = a->size;
	if (len_a-- > 3 && !is_sorted(a))
		pb(a, b);
	if (len_a-- > 3 && !is_sorted(a))
		pb(a, b);
	while (len_a-- > 3 && !is_sorted(a))
	{
		init_nodes_a(a, b);
		move_a_to_b(a, b);
	}
	ft_sort_three(a);
	while (b->size > 0)
	{
		init_nodes_b(a, b);
		move_b_to_a(a, b);
	}
	set_position(a);
	min_on_top(a);
}
