/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perform_moves2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 13:02:32 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/09 13:29:24 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_perform_rotates(t_list **a, t_list **b, t_list *cheap)
{
	int	timesa;
	int	timesb;

	timesa = (cheap)->costa;
	timesb = (cheap)->costb;
	while (timesa != 0 && timesb != 0)
	{
		rr(a, b);
		timesa--;
		timesb--;
	}
	while (timesa > 0)
	{
		ra(a);
		timesa--;
	}
	while (timesb > 0)
	{
		rb(b);
		timesb--;
	}
	pa(b, a);
}

void	ft_perform_reverse(t_list **a, t_list **b, t_list *cheap)
{
	int	timesa;
	int	timesb;

	timesa = ft_abs(cheap->costa);
	timesb = ft_abs(cheap->costb);
	while (timesa != 0 && timesb != 0)
	{
		rrr(a, b);
		timesa--;
		timesb--;
	}
	while (timesa > 0)
	{
		rra(a);
		timesa--;
	}
	while (timesb > 0)
	{
		rrb(b);
		timesb--;
	}
	pa(b, a);
}

void	ft_perform_mix(t_list **a, t_list **b, t_list *cheap)
{
	int	timesa;
	int	timesb;

	timesa = (cheap)->costa;
	timesb = (cheap)->costb;
	while (timesa > 0)
	{
		ra(a);
		timesa--;
	}
	while (timesa < 0)
	{
		rra(a);
		timesa++;
	}
	if (timesb)
		ft_perform_mix2(b, cheap);
	pa(b, a);
}

void	ft_perform_mix2(t_list **b, t_list *cheap)
{
	int	timesb;

	timesb = (cheap)->costb;
	while (timesb > 0)
	{
		rb(b);
		timesb--;
	}
	while (timesb < 0)
	{
		rrb(b);
		timesb++;
	}
}

void	ft_ultimatemove(t_list	**lst)
{
	int		times;
	t_list	*min;

	min = ft_min(lst);
	times = min->costb;
	while (times < 0)
	{
		rra(lst);
		times++;
	}
	while (times > 0)
	{
		ra(lst);
		times--;
	}
}
