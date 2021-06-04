/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:07:08 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 12:03:44 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int is_sort(t_pile *pile)
{
	while((*pile).next)
	{
		if((*pile).content > (*pile).next->content)
			return(0);
		pile = (*pile).next;
	}
	return(1);
}

void small_sort_trois(t_pile **pile, int start)
{  
	if((*pile)->rank == start)
	{
		r(pile, 'a');
		s(pile, 'a');
		rrr(pile, 'a');
	}
	if((*pile)->rank ==  start + 1 && (*pile)->next->rank == start + 2)
		rrr(pile, 'a');
	else if((*pile)->rank == start + 1)
		s(pile, 'a');	
	if((*pile)->rank ==  start + 2 && (*pile)->next->rank == start)
		r(pile, 'a');
	else if((*pile)->rank == start + 2)
	{
		r(pile, 'a');
		s(pile, 'a');
	}	
}
void small_sort_quatre(t_pile **pile_a, t_pile **pile_b)
{
	while(ft_plsize(*pile_a) == 4)
	{
		if((*pile_a)->rank != 1)
			direction_num(pile_a, 'a', 1);
		if((*pile_a)->rank == 1)
			p(pile_a, pile_b, 'a');
	}
	small_sort_trois(pile_a, 2);
	p(pile_b, pile_a, 'b');
}

void small_sort_cinq(t_pile **pile_a, t_pile **pile_b)
{

}

void small_sort(t_pile **pile_a, t_pile **pile_b)
{
	int size;

	size = ft_plsize((*pile_a));
	printf("taille = %d\n", size);
	if (size == 2 && !is_sort((*pile_a)))
		s(pile_a, 'a');
	if (size == 3 && !is_sort((*pile_a)))
		small_sort_trois(pile_a, 1);
	if (size == 4 && !is_sort((*pile_a)))
		small_sort_quatre(pile_a, pile_b);
	if (size == 5 && !is_sort((*pile_a)))
		small_sort_cinq(pile_a, pile_b);
}
