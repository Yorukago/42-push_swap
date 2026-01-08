/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:45 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:34:33 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((num % 10) + '0', fd);
}
// int	main(void)
// {
// 	int fd;
// 	fd = open("wtf", O_RDWR | O_CREAT, 0644);
// 	if (fd == -1)
// 		return (1); 
// 	ft_putnbr_fd(42, fd);
// 	close(fd);
// 	return (0);
// }