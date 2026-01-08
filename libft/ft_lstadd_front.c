/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:21 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:42:57 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}
// int main(void)
// {
// 	t_list *a = ft_lstnew("apple");
// 	t_list *b = ft_lstnew("banana");
// 	t_list *new = ft_lstnew("strawberry");

// 	a->next = b;

// 	ft_lstadd_front(&a, new);

// 	t_list *temp = a;
// 	while (temp)
// 	{
// 		printf("%s\n", (char *)temp->content);
// 		temp = temp->next;
// 	}
// }