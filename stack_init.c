/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgiraud <kgiraud@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:37:25 by kgiraud           #+#    #+#             */
/*   Updated: 2024/11/04 16:10:57 by kgiraud          ###   ########.fr       */
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
		// ici faut checker si y'a erreur de syntax
		nb = ft_atoi(*av);
		// ici faut checker que nb depasse pas int max et min
		// ici faut checker si y'a des doublons
		append_node(a, nb);
		av++;
	}
}