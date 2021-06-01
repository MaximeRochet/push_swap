/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_deux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 18:33:15 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/01 13:56:11 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void sort_deux(t_pile **pile_a, t_pile **pile_b)
{
	int rank;

	rank = ft_plsize(*(pile_b));
	while((*pile_b) && rank)
	{
		if((*pile_b)->rank == rank)
		{
			p(pile_b, pile_a, 'b');
			rank --;
		}
		else
			direction_num(pile_b, 'b', rank);
	}
}
