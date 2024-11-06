/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:11:05 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/06 13:23:32 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_highest_node(t_stack_node *stack)
{
	int 			value;
	t_stack_node	*highest;

	value = INT_MIN;
	highest = stack;
	while (stack)
	{
		if (stack->value > value)
		{
			value = stack->value;
			highest = stack;
		}
		stack = stack->next;
	}
	return (highest);
}

void	tiny_sort(t_stack_node **stack)
{
	t_stack_node *highest;

	highest = find_highest_node(*stack);
}