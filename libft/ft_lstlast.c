/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:31 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:54:38 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// int	main(void)
// {
// 	t_list *a = ft_lstnew("apple");
// 	t_list *b = ft_lstnew("banana");
// 	t_list *c = ft_lstnew("grape");

// 	a->next = b;
// 	b->next = c;

// 	t_list *last = ft_lstlast(a);
// 	if (last)
// 		printf("last node content: %s\n", (char *)last->content);
// 	else
// 		printf("list is empty :(\n");

// 	free(a);
// 	free(b);
// 	free(c);
// 	return 0;
// }
