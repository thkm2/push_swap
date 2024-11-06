/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:45:49 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/06 13:17:12 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

// à enlever
#include <stdio.h>

typedef struct s_stack_node
{
	int				value;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;

// error
int		syntax_error(char *s);
void	free_stack(t_stack_node **stack);
int		repetition_error(t_stack_node *a, int nb);
void	error_free(t_stack_node **stack);

// stack_init
int		ft_atoi(char *s);
void	stack_init(t_stack_node **a, char **av);

// stack_utils
void	append_node(t_stack_node **stack, int value);
int		stack_len(t_stack_node *stack);
int		stack_is_sorted(t_stack_node *stack);

// swap
void	sa(t_stack_node **stack_a);
void	sb(t_stack_node **stack_b);
void	ss(t_stack_node **stack_a, t_stack_node **stack_b);

#endif