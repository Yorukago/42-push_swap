/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:34:11 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/07 11:49:57 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int	main(void)
// {
// 	char	src[] = "heyaaaa";
// 	char	dest[20];
// 	size_t	res;
// 	res = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Source: %s\n", src);
// 	printf("Dest: %s\n", dest);
// 	printf("Returned length: %zu\n", res);
// 	char	small_dest[4];
// 	res = ft_strlcpy(small_dest, src, sizeof(small_dest));
// 	printf("\nWith small buffer:\n");
// 	printf("Destination: %s\n", small_dest);
// 	printf("Returned length: %zu\n", res);
// 	return (0);
// }