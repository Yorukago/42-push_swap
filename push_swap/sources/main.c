/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: jzorreta <jzorreta@.42lisboa.com>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2026/01/11 20:16:45 by jzorreta		  #+#	#+#			 */
/*   Updated: 2026/01/11 21:11:48 by jzorreta		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

// #include "push_swap.h"

// void print_stack(t_stack *stack, char *name)
// {
// 	t_node *curr = stack->start;
// 	printf("Stack %s: ", name);
// 	while (curr)
// 	{
// 		printf("%d -> ", *(curr->value));
// 		curr = curr->next;
// 	}
// 	printf("NULL (Size: %d)\n", stack->size);
// }
//
// int main(void)
// {
// 	t_stack a;
// 	t_stack b;
// 	ft_init_stack(&a);
// 	ft_init_stack(&b);
//
// 	printf("--- Pushing numbers ---\n");
// 	ft_push(&a, 42);
// 	ft_push(&a, 13);
// 	ft_push(&a, 7);
//	
// 	printf("Initial State:\n");
// 	print_stack(&a, "A");
// 	print_stack(&b, "B");
//
// 	printf("\nExecuting pb...\n");
// 	pb(&a, &b);
//
// 	print_stack(&a, "A");
// 	print_stack(&b, "B"); 
//
// 	return (0);
//
// 	// print_stack(&stack_a, "A");
//	
// 	// // POP
// 	// // printf("\n--- Popping one ---\n");
// 	// // int popped = ft_pop(&stack_a);
// 	// // printf("Popped value: %d\n", popped);
// 	// // print_stack(&stack_a, "A");
//
// 	// // SA
// 	// printf("Before sa:\n");
// 	// print_stack(&stack_a, "A");
//
// 	// sa(&stack_a);
//
// 	// printf("\nAfter sa:\n");
// 	// print_stack(&stack_a, "A");
// 	// return (0);
// }

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	(void)argv;
	if (argc < 2)
		return (0);
	ft_init_stack(&stack_a);
	ft_init_stack(&stack_b);
	write(1, "Main is alive!\n", 15);
	return (0);
}