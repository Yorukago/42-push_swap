/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:48:20 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/12 00:00:43 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	t_node *curr_a = a->start;
	t_node *curr_b = b->start;

	printf("\n--- STACK A ---   --- STACK B ---\n");
	while (curr_a || curr_b)
	{
		if (curr_a)
		{
			printf("  %d", curr_a->value);
			curr_a = curr_a->next;
		}
		else
			printf("   ");
		printf("             ");
		if (curr_b)
		{
			printf("  %d", curr_b->value);
			curr_b = curr_b->next;
		}
		printf("\n");
	}
	printf("---------------------------------\n\n");
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		i;
	long	tmp;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (0);
	ft_init_stack(&a);
	ft_init_stack(&b);
	i = 1;
	while (i < argc)
	{
		tmp = ft_atoi_long(argv[i], &a);
		if (has_duplicate(&a, (int)tmp))
			ft_error_exit(&a, &b);
		ft_stack_add_back(&a, (int)tmp);
		i++;
	}
	print_stacks(&a, &b);
	if (is_sorted(&a))
	{
		// free_stack(&a);
		return (0);
	}
	if (a.size == 2)
		sa(&a);
	else if (a.size == 3)
		ft_sort_three(&a);
	//else
	//	ft_turk_sort(&a, &b);
	
	// Final cleanup
	// free_stack(&a);
	// free_stack(&b);
	return (0);
}