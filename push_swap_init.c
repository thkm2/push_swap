/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:54:11 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/07 21:12:56 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_current_position(t_stack_node *stack)
{
	int i;
	int	median;

	i = 0;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (i <= median)
			stack->above_median = 1;
		else
			stack->above_median = 0;
		stack = stack->next;
		i++;
	}
}

void	init_nodes(t_stack_node *stack_a, t_stack_node *stack_b)
{
	set_current_position(stack_a);
	set_current_position(stack_b);
}