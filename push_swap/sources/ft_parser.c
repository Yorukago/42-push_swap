/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:18 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/11 23:49:20 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	has_duplicate(t_stack *stack, int num)
{
	t_node	*current;

	current = stack->start;
	while (current)
	{
		if (current->value == num)
			return (1);
		current = current->next;
	}
	return (0);
}

long	ft_atoi_long(const char *str, t_stack *a)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if (!ft_is_digit(*str))
		ft_error_exit(a, NULL);
	while (ft_is_digit(*str))
	{
		num = num * 10 + (*str - '0');
		if ((num * sign) > INT_MAX || (num * sign) < INT_MIN)
			ft_error_exit(a, NULL);
		str++;
	}
	if (*str != '\0')
		ft_error_exit(a, NULL);
	return (num * sign);
}
