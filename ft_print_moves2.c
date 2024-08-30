/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:13:14 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/05 17:40:25 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_list **b)
{
	write(1, "rrb\n", 4);
	ft_revrotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	write(1, "rrr\n", 4);
	ft_revrotate(b);
	ft_revrotate(a);
}
