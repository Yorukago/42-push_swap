/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_push.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jzorreta <jzorreta@.42lisboa.com>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/01/11 21:08:25 by jzorreta		  #+#	#+#			 */
/*   Updated: 2026/01/11 21:35:01 by jzorreta		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	val;

	if (!stack_b || !stack_b->start)
		return ;
	val = ft_pop(stack_b);
	ft_push(stack_a, val);
	write(1, "pa\n", 3);
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	int	val;

	if (!stack_a || !stack_a->start)
		return ;
	val = ft_pop(stack_a);
	ft_push(stack_b, val);
	write(1, "pb\n", 3);
}
