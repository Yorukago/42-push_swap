/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:35:50 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:08:52 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*a;

	a = s;
	while (n > 0)
	{
		if (*a == (unsigned char)c)
			return ((void *)a);
		a++;
		n--;
	}
	return (NULL);
}
// int main(void)
// {
// 	const char	s[] = "im going to lose this shiiiit";
// 	int			c = 'e';
// 	size_t		n = 36;
// 	void		*result = ft_memchr(s, c, n);

// 	if (!result)
// 		printf("Character '%c' wasn't found in the first %zu bytes\n", c, n);
// 	else
// 	{
// 		printf("Found '%c' here! %ld\n", c, (char *)result - s);
// 		printf("Substring from match: \"%s\"\n", (char *)result);
// 	}
// }