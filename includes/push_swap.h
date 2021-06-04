/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:08:54 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 11:50:17 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

typedef struct	s_pile
{
	int				content;
	int				rank;
	struct	s_pile	*next;
}					t_pile;

void	ft_pladd_back(t_pile **apile, t_pile *new);
void	ft_pladd_front(t_pile **alst, t_pile *new);
void	ft_pldelone(t_pile *pile, void (*del)(int));
void	ft_plclear(t_pile **pile, void (*del)(int));
t_pile	*ft_pllast(t_pile *pile);
t_pile	*ft_plnew(int content, int rank);
int		ft_plsize(t_pile *pile);
void	print_pile(t_pile *pile);

int ft_char_isdigit(char *str);
t_pile *create_pilea(int ac, char**av, t_pile *pile_a);
t_pile *fill_index(t_pile *pile, int rank, int ref);
int biggest_content(t_pile *pile);
t_pile *rank_pilea(t_pile *pile);
int verif_doublons(t_pile *pile);
t_pile *init_pilea(int ac, char**av);

void s(t_pile **pile, char c);
void ss(t_pile **pile, t_pile **pile_b);
void p(t_pile **pile_un, t_pile **pile_deux, char c);
void r(t_pile **pile, char c);
void rr(t_pile **pile_a, t_pile **pile_b);
void rrr(t_pile **pile, char c);
void rrrab(t_pile **pile_a, t_pile **pile_b);

void sort(t_pile **pile_a, t_pile **pile_b);
void sort_deux(t_pile **pile_a, t_pile **pile_b);
void direction_num(t_pile**, char ,int);
void direction_inter(t_pile**, char ,int, int);
void small_sort(t_pile **, t_pile**);
int is_sort(t_pile *);

#endif
