/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:49:50 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/04 16:12:58 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* int	main(int ac, char **av)
{
	t_stack stack_a;
	t_stack stack_b;
	int		stack_size;

	if (ac < 2)
		return (1);
	
} */


#include <stdio.h>
void print_stack(t_stack_node *stack)
{
	t_stack_node *current = stack;
	printf("Stack from start to end:\n");
	while (current)
	{
		printf("Value: %d\n", current->value);
		current = current->next;
	}
}

int main(int ac, char **av)
{
	t_stack_node *stack = NULL;

	stack_init(&stack, av + 1);

	// Afficher la liste
	print_stack(stack);

	return 0;
}