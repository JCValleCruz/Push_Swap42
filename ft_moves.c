/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:47:50 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/05 13:10:03 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lastnode(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	while (aux->next)
		aux = aux->next;
	return (aux);
}

t_list	*ft_secondlast(t_list **lst)
{
	t_list	*secondlast;

	secondlast = *lst;
	while (secondlast->next->next)
		secondlast = secondlast->next;
	return (secondlast);
}

void	ft_rotate(t_list **lst)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = *lst;
	second = (*lst)->next;
	last = ft_lastnode(lst);
	*lst = second;
	last->next = first;
	first->next = NULL;
}

void	ft_revrotate(t_list **lst)
{
	t_list		*first;
	t_list		*secondlast;
	t_list		*last;

	first = *lst;
	last = ft_lastnode(lst);
	secondlast = ft_secondlast(lst);
	secondlast->next = NULL;
	*lst = last;
	last->next = first;
}

void	ft_moveswap(t_list **lst)
{
	t_list	*aux;

	aux = *lst;
	*lst = (*lst)->next;
	aux->next = (*lst)->next;
	(*lst)->next = aux;
}
