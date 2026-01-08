/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:17:10 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/12 13:17:14 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
	}
	c = '0' + (nb % 10);
	count += ft_putchar(c);
	return (count);
}

int	ft_putnbr_unsigned(long nb)
{
	char	c;
	int		count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_putnbr_unsigned(nb / 10);
	}
	c = '0' + (nb % 10);
	count += ft_putchar(c);
	return (count);
}

int	ft_putnbr_hex(t_ul nb, char *BASE)
{
	int		count;

	count = 0;
	if (nb >= 16)
		count += ft_putnbr_hex(nb / 16, BASE);
	count += ft_putchar(BASE[nb % 16]);
	return (count);
}
