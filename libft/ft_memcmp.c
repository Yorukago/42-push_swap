/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:35:59 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:10:18 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*i;
	const unsigned char	*j;

	i = s1;
	j = s2;
	while (n > 0)
	{
		if (*i != *j)
			return (*i - *j);
		i++;
		j++;
		n--;
	}
	return (0);
}
// int	main(void)
// {
// 	const char	*s1 = "hello";
// 	const char	*s2 = "hello World";
// 	size_t n = 6;

// 	printf("Difference in ascii: %i\n", ft_memcmp(s1, s2, n));
// }