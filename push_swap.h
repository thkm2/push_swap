/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:45:49 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/07 21:10:51 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack_node
{
	int					value;
	int					current_position;
	int					above_median;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;

// error
int				syntax_error(char *s);
void			free_stack(t_stack_node **stack);
int				repetition_error(t_stack_node *a, int nb);
void			error_free(t_stack_node **stack);

// stack_init
int				ft_atoi(char *s);
void			stack_init(t_stack_node **a, char **av);

// stack_utils
t_stack_node	*find_last_node(t_stack_node *stack_node);
void			append_node(t_stack_node **stack, int value);
int				stack_len(t_stack_node *stack);
int				stack_is_sorted(t_stack_node *stack);

// swap
void			sa(t_stack_node **stack_a);
void			sb(t_stack_node **stack_b);
void			ss(t_stack_node **stack_a, t_stack_node **stack_b);

// rotate
void			ra(t_stack_node **stack_a);
void			ra(t_stack_node **stack_a);
void			rr(t_stack_node **stack_a, t_stack_node **stack_b);

// reverse_rotate
void			rra(t_stack_node **stack_a);
void			rra(t_stack_node **stack_a);
void			rrr(t_stack_node **stack_a, t_stack_node **stack_b);

// push
void			pa(t_stack_node **stack_a, t_stack_node **stack_b);
void			pb(t_stack_node **stack_a, t_stack_node **stack_b);

// tiny_sort
void			tiny_sort(t_stack_node **stack);
void			sort_five(t_stack_node **stack_a, t_stack_node **stack_b);

// push swap command

#endif