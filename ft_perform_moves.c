/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perform_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:56:39 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/05 17:25:47 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"					

void	ft_perform_moves(t_list **a, t_list **b)
{
	t_list	*cheap;

	cheap = ft_find_cheapest(b);
	if (cheap->costa < 0 && cheap->costb < 0)
		ft_perform_reverse(a, b, cheap);
	else if (cheap->costa > 0 && cheap->costb > 0)
		ft_perform_rotates(a, b, cheap);
	else
		ft_perform_mix(a, b, cheap);
}

int	ft_abs(int value)
{
	if (value < 0)
		value = value * -1;
	else
		value = value * 1;
	return (value);
}

t_list	*ft_find_cheapest(t_list **lst)
{
	int		totalcost;
	int		cheap;
	t_list	*temp;
	t_list	*result;

	temp = *lst;
	result = *lst;
	cheap = ft_abs(temp->costa) + ft_abs(temp->costb);
	while (temp)
	{
		totalcost = ft_abs(temp->costa) + ft_abs(temp->costb);
		if (totalcost < cheap)
		{
			cheap = totalcost;
			result = temp;
		}
		temp = temp->next;
	}
	return (result);
}
