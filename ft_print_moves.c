/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:47:34 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/05 17:40:01 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	write(1, "ra\n", 3);
	ft_rotate(a);
}

void	rb(t_list **b)
{
	write(1, "rb\n", 3);
	ft_rotate(b);
}

void	rr(t_list **a, t_list **b)
{
	write(1, "rr\n", 3);
	ft_rotate(a);
	ft_rotate(b);
}

void	sa(t_list **a)
{
	write(1, "sa\n", 3);
	ft_moveswap(a);
}

void	rra(t_list **a)
{
	write(1, "rra\n", 4);
	ft_revrotate(a);
}
