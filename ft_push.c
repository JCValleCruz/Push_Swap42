/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 10:49:53 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/05 14:34:12 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **src, t_list **dst)
{
	t_list	*aux;

	aux = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = aux;
}

void	pa(t_list **src, t_list **dst)
{
	ft_push(src, dst);
	write(1, "pa\n", 3);
}

void	pb(t_list **src, t_list **dst)
{
	ft_push(src, dst);
	write(1, "pb\n", 3);
}
