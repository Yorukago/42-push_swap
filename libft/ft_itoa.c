/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:16 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 11:47:22 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	long	nb;

	nb = n;
	len = get_len(n);
	if (nb < 0)
		nb = -nb;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len-- > 0)
	{
		result[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
// int	main(void)
// {
// 	printf("Positive number: %s\n", ft_itoa(1234));
// 	printf("Negative number: %s\n", ft_itoa(-1234));
// 	return (0);
// }