/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:43 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:44:42 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
	write (fd, "\n", 1);
}
// int	main(void)
// {
// 	int fd;
// 	fd = open("wtf", O_RDWR | O_CREAT, 0644);
// 	if (fd == -1)
// 		return (1); 
// 	ft_putendl_fd("what", fd);
// 	close(fd);
// 	return (0);
// }