/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:18 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:41:19 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*position;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		position = ft_lstlast(*lst);
		position->next = new;
	}
}
// int main(void)
// {
//     t_list *a = ft_lstnew("apple");
//     t_list *b = ft_lstnew("banana");
//     t_list *c = ft_lstnew("grape");
//     t_list *new = ft_lstnew("strawberry");

//     a->next = b;
//     b->next = c;

//     ft_lstadd_back(&a, new);

//     t_list *temp = a;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }

//     free(a);
//     free(b);
//     free(c);
//     free(new);
//     return 0;
// }