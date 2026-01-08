/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:35:33 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 13:02:03 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*(unsigned char *)s == (unsigned char)c)
			last = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (last);
}
// int	main(void)
// {
// 	const char	*str = "a cat meows and a dog barks";
// 	int			ch = 'm';
// 	char		*result;

// 	result = ft_strrchr(str, ch);
// 	printf("this is for the last occurence of the selected char.");
// 	if (result)
// 		printf("\ni saw '%c' in \"%s\" → \"%s\"\n", ch, str, result);
// 	else
// 		printf("\nCharacter '%c' not found in \"%s\"\n", ch, str);
// 	return (0);
// }