/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:34:51 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:24:36 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_s;
	size_t	src_s;
	size_t	i;

	dst_s = ft_strlen(dst);
	src_s = ft_strlen(src);
	if (size <= dst_s)
		return (src_s + size);
	i = 0;
	while (src[i] && (dst_s + i < size - 1))
	{
		dst[dst_s + i] = src[i];
		i++;
	}
	dst[dst_s + i] = '\0';
	return (dst_s + src_s);
}
// int	main(void)
// {
// 	char buffer[20] = "Hello";
// 	const char *to_add = " World!";
// 	size_t result;

// 	result = ft_strlcat(buffer, to_add, sizeof(buffer));
// 	printf("final result: \"%s\"\n", buffer);
// 	printf("supposed size: %zu\n", result);
// 	return (0);
// }