/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:48:20 by jzorreta          #+#    #+#             */
/*   Updated: 2026/02/25 16:46:31 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	start_sorting(t_stack *a, t_stack *b)
{
	if (a->size == 2)
		sa(a);
	else if (a->size == 3)
		ft_sort_three(a);
	else if (a->size <= 5)
		ft_sort_five(a, b);
	else
		ft_turk_sort(a, b);
}

int	starter(int argc, char **argv, t_stack *a, t_stack *b)
{
	int		i;
	int		j;
	char	**split_args;

	ft_init_stack(a);
	ft_init_stack(b);
	i = 1;
	while (i < argc)
	{
		split_args = ft_split(argv[i], ' ');
		if (!split_args)
			ft_error_exit(a, b);
		j = 0;
		while (split_args[j])
		{
			parse_and_add(a, b, split_args[j], split_args);
			j++;
		}
		i++;
		free_split(split_args);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (0);
	starter(argc, argv, &a, &b);
	if (!is_sorted(&a) && a.size > 1)
		start_sorting(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
