/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:24 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:50:11 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*current;

	if (lst && del)
	{
		current = *lst;
		while (current)
		{
			next = current->next;
			del(current->content);
			free(current);
			current = next;
		}
		*lst = NULL;
	}
}
// void	del_content(void *content)
// {
// 	free(content);
// }
// int main(void)
// {
// 	t_list *a = ft_lstnew(ft_strdup("croissant"));
// 	t_list *b = ft_lstnew(ft_strdup("baguette"));
// 	t_list *c = ft_lstnew(ft_strdup("brioche"));

// 	a->next = b;
// 	b->next = c;

// 	printf("list:\n");
// 	t_list *tmp = a;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}

// 	ft_lstclear(&a, del_content);

// 	printf("\nis it clear? ");
// 	if (a == NULL)
// 		printf("list is empty now!\n");
// 	else
// 		printf("list still exists somehow??\n");

// 	return 0;
// }