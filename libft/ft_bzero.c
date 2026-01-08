/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:31:45 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 11:45:09 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "abcdefghi";
//     printf("Before: %s\n", str);
//     ft_bzero(str, 5);
//     printf("After: ");
//     for (int i = 0; i < 9; i++)
//         printf("%d ", str[i]);
//     printf("\n");
//     return (0);
// }
