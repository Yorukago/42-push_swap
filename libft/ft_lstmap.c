/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:33 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/07 13:21:31 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	new_node = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
// int	main(void)
// {
// 	t_list *a = ft_lstnew(ft_strdup("croissant"));
// 	t_list *b = ft_lstnew(ft_strdup("baguette"));
// 	t_list *c = ft_lstnew(ft_strdup("brioche"));
// 	a->next = b;
// 	b->next = c;

// 	printf("Original list:\n");
// 	for (t_list *tmp = a; tmp; tmp = tmp->next)
// 		printf("%s\n", (char *)tmp->content);
// 	t_list *upper_list = ft_lstmap(a, (void *(*)(void *))ft_strdup, free);
// 	for (t_list *tmp = upper_list; tmp; tmp = tmp->next)
// 	{
// 		char *s = (char *)tmp->content;
// 		while (*s)
// 		{
// 			*s = (char)ft_toupper((unsigned char)*s);
// 			s++;
// 		}
// 	}
// 	printf("\nMapped list:\n");
// 	for (t_list *tmp = upper_list; tmp; tmp = tmp->next)
// 		printf("%s\n", (char *)tmp->content);

// 	ft_lstclear(&a, free);
// 	ft_lstclear(&upper_list, free);
// 	return (0);
// }