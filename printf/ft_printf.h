/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:41:08 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/12 14:54:57 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

typedef unsigned int		t_ui;
typedef unsigned long		t_ul;
typedef unsigned long long	t_ull;

# define HEX_LOW "0123456789abcdef"
# define HEX_HIGH "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	ft_argument_checker(char c, va_list args);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr_hex(t_ul nb, char *BASE);
int	ft_putptr(t_ull ptr);
int	ft_putnbr(long nb);
int	ft_putnbr_unsigned(long nb);

#endif