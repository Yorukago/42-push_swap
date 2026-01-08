/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:42:40 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/12 14:56:29 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_argument_checker(char c, va_list args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr((long)va_arg(args, int));
	else if (c == 'u')
		len += ft_putnbr_unsigned((long)va_arg(args, t_ui));
	else if (c == 'p')
		len += ft_putptr(va_arg(args, t_ull));
	else if (c == 'x')
		len += ft_putnbr_hex((t_ul)va_arg(args, t_ui), HEX_LOW);
	else if (c == 'X')
		len += ft_putnbr_hex((t_ul)va_arg(args, t_ui), HEX_HIGH);
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		len;
	va_list	args;

	len = 0;
	i = -1;
	if (!str)
		return (-1);
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			len += ft_argument_checker(str[++i], args);
		else
			len += ft_putchar((int)str[i]);
	}
	va_end(args);
	return (len);
}
