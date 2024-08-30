/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:01:33 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/09 11:19:43 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_setindex(t_list **a)
{
	int		*tab;
	int		i;
	t_list	*aux;

	tab = malloc(ft_lstsize(*a) * sizeof(int));
	if (!tab)
		return ;
	i = 0;
	aux = *a;
	while (aux)
	{
		tab[i] = aux->value;
		aux = aux->next;
		i++;
	}
	tab = ft_sort_int_tab (tab, i);
	ft_putindex(a, tab, i);
	free(tab);
}

int	*ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	return (tab);
}

void	ft_putindex(t_list **a, int *tab, int size)
{
	t_list	*aux;
	int		i;

	aux = *a;
	i = 0;
	while (aux)
	{
		while (i < size)
		{
			if (tab[i] == aux->value)
			{
				aux->index = i + 1;
			}
			i++;
		}
		i = 0;
		aux = aux->next;
	}
}
