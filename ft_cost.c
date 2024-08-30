/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:15:54 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/12 14:49:47 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_costa(t_list **a, t_list **b)
{
	t_list	*temp;
	int		size;
	int		half;

	temp = *b;
	size = ft_lstsize (*a);
	half = (size / 2) + 1;
	while (temp)
	{
		if (temp->target <= half)
		{
			temp->costa = temp->target - 1;
		}
		else
			temp->costa = temp->target - size - 1;
		temp = temp->next;
	}
}

void	ft_costb(t_list	**b)
{
	int		size;
	int		half;
	t_list	*aux;

	size = ft_lstsize(*b);
	half = (size / 2) + 1;
	aux = *b;
	while (aux)
	{
		if (aux->pos <= half)
		{
			aux->costb = aux->pos - 1;
		}
		else if (aux->pos > half)
			aux->costb = aux->pos - size - 1;
		aux = aux->next;
	}
}
