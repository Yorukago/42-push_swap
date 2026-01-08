/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:53 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:24:43 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	str = ft_calloc(lens1 + lens2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < lens1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < lens1 + lens2)
	{
		str[i] = s2[i - lens1];
		i++;
	}
	return (str);
}
// int	main(void){
// 	char const *s1 = "Yay!! ";
// 	char const *s2 = "(add something here)";
// 	char *dest;

// 	dest = ft_strjoin(s1, s2);
// 	printf("combined string: %s\n", dest);
// 	free(dest);
// 	return (0);
// }