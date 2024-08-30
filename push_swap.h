/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:13:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/09 14:50:22 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <sys/errno.h>
# include <stdlib.h>

typedef struct s_list
{
	long long				value;
	int						pos;
	int						index;
	int						target;
	int						costa;
	int						costb;
	struct s_list			*next;
}	t_list;

//lst utils
t_list		*ft_lstnew(long long value);
int			ft_lstsize(t_list *lst);
void		ft_lstaddback(t_list **lst, t_list *new);
//libft utils
long long	ft_atoll(const char *str, t_list **lst, char **split);
//Posición
void		ft_setpos(t_list **lst);
//Index
void		ft_putindex(t_list **a, int *tab, int size);
void		ft_setindex(t_list **a);
int			*ft_sort_int_tab(int *tab, int size);
//Sort Three
void		ft_sort_three(t_list **a);
t_list		*ft_max(t_list	**a);
t_list		*ft_min(t_list	**a);
//Moves
void		ft_moveswap(t_list **lst);
t_list		*ft_lastnode(t_list **lst);
t_list		*ft_secondlast(t_list **lst);
void		ft_rotate(t_list **lst);
void		ft_revrotate(t_list **lst);
//Push
void		ft_push(t_list **src, t_list **dst);
//First Move
void		ft_firstmove(t_list **a, t_list **b);
//Targets
void		ft_target(t_list **a, t_list **b, int size);
void		ft_settarget(t_list **a, t_list *nodeb, int size);
void		ft_settargetnext(t_list **a, t_list *nodeb, int size);
//Costes
void		ft_costa(t_list **a, t_list **b);
void		ft_costb(t_list	**b);
//print_moves
void		rrr(t_list **a, t_list **b);
void		rrb(t_list **b);
void		rra(t_list **a);
void		sa(t_list **a);
void		rr(t_list **a, t_list **b);
void		rb(t_list **b);
void		ra(t_list **a);
void		pa(t_list **src, t_list **dst);
void		pb(t_list **src, t_list **dst);
//Check and Run Moves
void		ft_ultimatemove(t_list **lst);
void		ft_perform_rotates(t_list **a, t_list **b, t_list *cheap);
void		ft_perform_reverse(t_list **a, t_list **b, t_list *cheap);
void		ft_perform_moves(t_list **a, t_list **b);
int			ft_abs(int value);
t_list		*ft_find_cheapest(t_list **lst);
void		ft_perform_mix(t_list **a, t_list **b, t_list *cheap);
void		ft_perform_mix2(t_list **b, t_list *cheap);
//CheckDoubles&Order
int			ft_check_doubles(t_list **lst);
int			ft_checkorder(t_list **lst);
//Split Args
char		**ft_split(const char *s, char c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
size_t		ft_strlen(const char *str);
void		free_split(char **split);
//PrintError
void		ft_print_error(t_list **lst);
//Main
void		ft_push_swap(t_list *a, t_list *b);
void		ft_core(int argc, char **argv, int arg_i, t_list **a);
void		ft_free_stack(t_list **lst);
#endif