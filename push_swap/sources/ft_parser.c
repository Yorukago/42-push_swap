/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 23:49:18 by jzorreta          #+#    #+#             */
/*   Updated: 2026/01/12 22:59:36 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
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

long    ft_atoi_long(const char *str, t_stack *a)
{
    long    num;
    int     sign;
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
    if (!(*str >= '0' && *str <= '9'))
        ft_error_exit(a, NULL);
    while (*str >= '0' && *str <= '9')
    {
        num = num * 10 + (*str - '0');
        if ((num * sign) > 2147483647L || (num * sign) < -2147483648L)
            ft_error_exit(a, NULL);
        str++;
    }
    if (*str != '\0')
        ft_error_exit(a, NULL);
    return (num * sign);
}

void	parse_and_add(t_stack *a, t_stack *b, char *str, char **split_to_free)
{
	long	tmp;

	if (!is_number(str))
	{
		free_split(split_to_free);
		ft_error_exit(a, b);
	}
	tmp = ft_atoi_long(str, a);
	if (has_duplicate(a, (int)tmp))
	{
		free_split(split_to_free);
		ft_error_exit(a, b);
	}
	ft_stack_add_back(a, (int)tmp);
}