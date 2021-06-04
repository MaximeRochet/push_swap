/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:07:08 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 15:18:00 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	is_sort(t_pile *pile)
{
	while ((*pile).next)
	{
		if ((*pile).content > (*pile).next->content)
			return (0);
		pile = (*pile).next;
	}
	return (1);
}

void	small_sort_trois(t_pile **pile, int start)
{
	if ((*pile)->rank == start && (*pile)->next->rank == start + 2)
	{
		r(pile, 'a');
		s(pile, 'a');
		rrr(pile, 'a');
	}
	if ((*pile)->rank == start + 1 && (*pile)->next->rank == start + 2)
		rrr(pile, 'a');
	else if ((*pile)->rank == start + 1)
		s(pile, 'a');
	if ((*pile)->rank == start + 2 && (*pile)->next->rank == start)
		r(pile, 'a');
	else if ((*pile)->rank == start + 2)
	{
		r(pile, 'a');
		s(pile, 'a');
	}	
}

void	small_sort_sec(t_pile **pile_a, t_pile **pile_b)
{
	int	rank;
	int	size;

	rank = 1;
	size = ft_plsize(*pile_a);
	while (ft_plsize(*pile_a) != 3)
	{
		if ((*pile_a)->rank != rank)
			direction_num(pile_a, 'a', rank);
		if ((*pile_a)->rank == rank)
		{
			p(pile_a, pile_b, 'b');
			rank ++;
		}
	}
	if (!is_sort((*pile_a)))
		small_sort_trois(pile_a, size - 2);
	while (--rank != 0)
	{	
		p(pile_b, pile_a, 'a');
	}
}

void	small_sort(t_pile **pile_a, t_pile **pile_b)
{
	int	size;

	size = ft_plsize((*pile_a));
	if (size == 2 && !is_sort((*pile_a)))
		s(pile_a, 'a');
	if (size == 3 && !is_sort((*pile_a)))
		small_sort_trois(pile_a, 1);
	if (size == 4 && !is_sort((*pile_a)))
		small_sort_sec(pile_a, pile_b);
	if (size == 5 && !is_sort((*pile_a)))
		small_sort_sec(pile_a, pile_b);
}
