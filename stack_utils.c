/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:33:27 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/07 22:00:57 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*find_last_node(t_stack_node *stack_node)
{
	while (stack_node->next)
		stack_node = stack_node->next;
	return (stack_node);
}

void	append_node(t_stack_node **stack, int value)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = (t_stack_node *)malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->value = value;
	if (*stack == NULL)
	{
		node->prev = NULL;
		*stack = node;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

int	stack_len(t_stack_node *stack)
{
	int	len;

	len = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		stack = stack->next;
		len++;
	}
	return (len);
}

t_stack_node	*find_smallest(t_stack_node	*stack)
{
	t_stack_node	*smallest;
	long			sm;

	sm = LONG_MAX;
	while (stack)
	{
		if (stack->value < sm)
		{
			sm = stack->value;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}