/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:37:25 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/06 12:29:02 by kgiraud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *s)
{
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		nb *= 10;
		nb += *s - 48;
		s++;
	}
	return (nb * sign);
}

void	stack_init(t_stack_node **a, char **av)
{
	long	nb;

	while (*av)
	{
		if (syntax_error(*av))
			error_free(a);
		nb = ft_atoi(*av);
		if (nb >= INT_MAX || nb <= INT_MIN)
			error_free(a);
		if (repetition_error(*a, nb))
			error_free(a);
		append_node(a, nb);
		av++;
	}
}