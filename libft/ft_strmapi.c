/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:57 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 13:06:47 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	result = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
// static char	f(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (ft_tolower(c));
// 	else
// 		return (ft_toupper(c));
// }

// int	main(void)
// {
// 	char	str[] = "RiCiNG SuCkS";
// 	char	*result;

// 	result = ft_strmapi(str, f);
// 	if (!result)
// 		dprintf(2, "not enough memory :(\n");
// 	else
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Mapped:   %s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }