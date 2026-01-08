/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:26 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/11 13:33:33 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
// void	del_content(void *content)
// {
// 	free(content);
// }
// int	main(void)
// {
// 	t_list *node = ft_lstnew(ft_strdup("juice"));
// 	printf("Before delete: %s\n", (char *)node->content);
// 	ft_lstdelone(node, del_content);
// 	printf("After delete: node is freed (don't access it!)\n");
// 	return 0;
// }