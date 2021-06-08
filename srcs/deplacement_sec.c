/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement_sec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:47:22 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 14:26:33 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_pile **pile, char c)
{
	t_pile	*tmp;

	tmp = (*pile);
	(*pile) = ft_pllast((*pile));
	(*pile)->next = tmp;
	while ((*tmp).next != (*pile))
		tmp = (*tmp).next;
	(*tmp).next = NULL;
	if (c == 'a')
		printf("rra\n");
	if (c == 'b')
		printf("rrb\n");
}

void	rrrab(t_pile **pile_a, t_pile **pile_b)
{
	rrr(pile_a, 'c');
	rrr(pile_b, 'c');
	printf("rrr\n");
}
