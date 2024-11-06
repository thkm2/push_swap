/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:31:56 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/06 22:10:22 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack_node **src, t_stack_node **dest)
{
	t_stack_node	*to_push;

	if (!src || *src)
		return ;
	to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	if (!*dest)
	{
		*dest = to_push;
		to_push->next = NULL;
		to_push->prev = NULL;
	}
	else
	{
		to_push->next = *dest;
		to_push->prev = NULL;
		to_push->next->prev = to_push;
		*dest = to_push;
	}
}

void	pa(t_stack_node **stack_a, t_stack_node **stack_b)
{
	pa(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack_node **stack_a, t_stack_node **stack_b)
{
	pa(stack_a, stack_b);
	write(1, "pb\n", 3);
}