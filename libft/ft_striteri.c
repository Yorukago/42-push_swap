/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:55 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 12:51:34 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// static void	f(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = (char)ft_tolower((unsigned char)*c);
// }

// int	main(void)
// {
// 	char s[] = "WELCOME EVERYONE MY NAME IS WELCOME ... WHAT";

// 	printf("before: \"%s\"\n", s);
// 	ft_striteri(s, f);
// 	printf("after: \"%s\"\n", s);
// 	return (0);
// }