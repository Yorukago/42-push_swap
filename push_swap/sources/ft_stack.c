/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_stack.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jzorreta <jzorreta@.42lisboa.com>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/01/11 21:18:35 by jzorreta		  #+#	#+#			 */
/*   Updated: 2026/01/11 21:19:10 by jzorreta		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	ft_init_stack(t_stack *stack)
{
	stack->size = 0;
	stack->start = NULL;
}

void	ft_push(t_stack *stack, int value)
{
	t_node	*new_node;
	int		*val_ptr;

	new_node = malloc(sizeof(t_node));
	val_ptr = malloc(sizeof(int));
	if (!new_node || !val_ptr)
		return ;
	*val_ptr = value;
	new_node->value = val_ptr;
	new_node->next = stack->start;
	stack->start = new_node;
	stack->size++;
}

int	ft_pop(t_stack *stack)
{
	t_node	*temp;
	int		popped_val;

	if (!stack->start)
		return (0);
	temp = stack->start;
	popped_val = *(temp->value);
	stack->start = temp->next;
	free(temp->value);
	free(temp);
	stack->size--;
	return (popped_val);
}
