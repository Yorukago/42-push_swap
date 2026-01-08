/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:31:25 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 11:46:58 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
// int	main(void)
// {
// 	printf("Size: %zu\n", ft_strlen("Hello!"));
// 	printf("Sizeof: %zu\n", sizeof(size_t));
// 	return (0);
// }