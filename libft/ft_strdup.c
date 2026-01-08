/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:03:17 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 15:36:57 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// int	main(void)
// {
// 	char *src = "heyaaa (with intention to kms)";
// 	char *dest = ft_strdup(src);

// 	if (!dest)
// 		dprintf(2, "allocation didnt work :(\n");
// 	else
// 		printf("duplicated string: \"%s\"\n", dest);
// 	free(dest);
// 	return (0);
// }