/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzorreta <jzorreta@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:05:36 by jzorreta          #+#    #+#             */
/*   Updated: 2025/11/06 14:30:31 by jzorreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int	main(void)
// {
// 	char	*text = "hello linked world";
// 	t_list	*node;
// 	node = ft_lstnew(text);
// 	if (!node)
// 	{
// 		dprintf(2, "malloc failed\n");
// 		return (1);
// 	}
// 	printf("node content: %s\n", (char *)node->content);
// 	printf("next node: %p\n", (void *)node->next);
// 	free(node);
// 	return (0);
// }