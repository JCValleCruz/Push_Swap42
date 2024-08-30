/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdoublesorder.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 20:00:36 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/07 18:18:10 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_doubles(t_list **lst)
{
	t_list	*aux;
	t_list	*temp;

	aux = *lst;
	while (aux->next != NULL)
	{
		temp = aux->next;
		while (temp)
		{
			if (aux->value == temp->value)
				return (0);
			temp = temp->next;
		}
		aux = aux->next;
	}
	return (1);
}

int	ft_checkorder(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}
