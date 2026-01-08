/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:48 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:36:54 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
// int	main(void)
// {
// 	int fd;
// 	fd = open("wtf", O_RDWR | O_CREAT, 0644);
// 	if (fd == -1)
// 		return (1); 
// 	ft_putstr_fd("what", fd);
// 	close(fd);
// 	return (0);
// }