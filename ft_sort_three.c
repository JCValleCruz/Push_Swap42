/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:32:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/06 11:35:30 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_list **a)
{
	t_list	*max;
	t_list	*min;

	max = ft_max(a);
	min = ft_min(a);
	ft_setpos(a);
	if (max->pos == 2)
	{
		rra(a);
		ft_setpos(a);
	}
	else if (max->pos == 1)
	{
		ra(a);
		ft_setpos(a);
	}
	if (min->pos == 2)
	{
		sa(a);
		ft_setpos(a);
	}
}

t_list	*ft_max(t_list	**a)
{
	t_list	*max;
	t_list	*aux;

	max = *a;
	aux = *a;
	while (aux)
	{
		if (aux->index > max->index)
		{
			max = aux;
		}
		aux = aux->next;
	}
	return (max);
}

t_list	*ft_min(t_list	**a)
{
	t_list	*min;
	t_list	*aux;

	min = *a;
	aux = *a;
	while (aux)
	{
		if (aux->index < min->index)
		{
			min = aux;
		}
		aux = aux->next;
	}
	return (min);
}
