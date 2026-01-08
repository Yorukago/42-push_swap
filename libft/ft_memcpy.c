/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:32:05 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/11 14:18:45 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	k;
	char	*n_dest;
	char	*n_src;

	if (!dest && !src)
		return (NULL);
	n_dest = (char *)dest;
	n_src = (char *)src;
	k = 0;
	while (k < n)
	{
		n_dest[k] = n_src[k];
		k++;
	}
	return (dest);
}
// int	main(void)
// {
// 	char *src = "Hello thingy!! i hate myself!!!";
// 	char *dest;
// 	size_t n;
//
// 	n = ft_strlen(src);
// 	dest = malloc(sizeof(char) * ft_strlen(src));
// 	printf("Copied: %s\n", (char *)ft_memcpy(dest, src, n));
// 	return (0);
// }