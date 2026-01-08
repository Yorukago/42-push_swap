/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:38 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 15:47:06 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
// int	main(void)
// {

// 	t_list *a = ft_lstnew("croissant");
// 	t_list *b = ft_lstnew("baguette");
// 	t_list *c = ft_lstnew("brioche");

// 	a->next = b;
// 	b->next = c;

// 	int size = ft_lstsize(a);

// 	printf("list size: %d\n", size);

// 	free(a);
// 	free(b);
// 	free(c);

// 	return (0);
// }
