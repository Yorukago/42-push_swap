/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:36:24 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 11:34:03 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*ptr == ' ' || (*ptr >= 9 && *ptr <= 13))
		ptr++;
	if (*ptr == '+' || *ptr == '-')
	{
		if (*ptr == '-')
			sign *= -1;
		ptr++;
	}
	while (*ptr >= '0' && *ptr <= '9')
	{
		sum = (sum * 10) + (*ptr - '0');
		ptr++;
	}
	return (sign * sum);
}
// int	main(void)
// {
// 	char *s = "1234";
// 	printf("Number inputed: %d\n", ft_atoi(s));
// 	return (0);
// }