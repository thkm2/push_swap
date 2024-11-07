/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_command.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 20:53:04 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/07 22:21:11 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack_node **stack_a, t_stack_node **stack_b)
{
	int	len_a;

	len_a = stack_len(*stack_a);
/* 	if (len_a == 5)
		sort_five(stack_a, stack_b); */
	while (len_a-- > 3)
		pb(stack_a, stack_b);
	
}