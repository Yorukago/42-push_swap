/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:31:48 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:00:44 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;

	i = s;
	while (n > 0)
	{
		*i = (unsigned char) c;
		n--;
		i++;
	}
	return (s);
}
// int	main(void)
// {
// 	char str[] = "im gonna cry";
// 	size_t n = 5;

// 	printf("Befowe: %s\n", str);
// 	ft_memset(str + 7, '*', n);
// 	printf("Aftwa: %s\n", str);
// 	return (0);
// }