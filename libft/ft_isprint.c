/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:30:54 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 11:47:19 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	int	c = 'a';
// 	printf("Is is printable? %d\n", ft_isprint(c));
// 	return (0);
// }