/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:06:01 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 13:03:08 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = ft_calloc(len + 1, sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
// int	main(void)
// {
// 	const char	*str = "Hello world...yeah idk what else to say";
// 	char		*sub;

// 	sub = ft_substr(str, 6, 7);
// 	if (!sub)
// 		dprintf(2, "malloc failed :(\n");
// 	else
// 	{
// 		printf("Original: \"%s\"\n", str);
// 		printf("Substring: \"%s\"\n", sub);
// 		free(sub);
// 	}
// 	return (0);
// }