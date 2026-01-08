/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:29 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 15:47:01 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
// int	main(void)
// {
// 	t_list *a = ft_lstnew(ft_strdup("croissant"));
// 	t_list *b = ft_lstnew(ft_strdup("baguette"));
// 	t_list *c = ft_lstnew(ft_strdup("brioche"));
// 	a->next = b;
// 	b->next = c;
// 	printf("Before:\n");
// 	for (t_list *tmp = a; tmp; tmp = tmp->next)
// 		printf("%s\n", (char *)tmp->content);
// 	for (t_list *tmp = a; tmp; tmp = tmp->next)
// 	{
// 		char *s = (char *)tmp->content;
// 		while (*s)
// 		{
// 			*s = (char)ft_toupper((unsigned char)*s);
// 			s++;
// 		}
// 	}
// 	printf("\nAfter:\n");
// 	for (t_list *tmp = a; tmp; tmp = tmp->next)
// 		printf("%s\n", (char *)tmp->content);
// 	ft_lstclear(&a, free);
// 	return (0);
// }
