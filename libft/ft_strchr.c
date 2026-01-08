/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:35:21 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:45:07 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
// int	main(void)
// {
// 	const char *s = "Yippieee wooooo";
// 	int c = 'o';
// 	char *result;

// 	result = ft_strchr(s, c);
// 	if (result == NULL)
// 		printf("i couldnt find '%c' in \"%s\" piece of shit\n ", (char)c, s);
// 	else
// 		printf("found '%c' in \"%s\" in here: %ld\n", (char)c, s, result - s);
// 	return (0);
// }