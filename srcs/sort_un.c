/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_un.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:55:30 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 14:28:34 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	direction_num(t_pile **pile, char c, int rank)
{
	int		i;
	t_pile	*tmp;
	int		size;

	size = ft_plsize(*pile);
	tmp = *pile;
	i = 0;
	while ((*pile)->rank != rank)
	{
		(*pile) = (*pile)->next;
		i++;
	}
	*pile = tmp;
	if (i < (size - i))
		r(pile, c);
	else
		rrr(pile, c);
}

void	direction_inter(t_pile **pile, char c, int debut, int fin)
{
	int		i;
	int		j;
	int		size;
	t_pile	*tmp;

	tmp = *pile;
	i = 0;
	while (*pile && ((*pile)->rank < debut || (*pile)->rank > fin))
	{
		(*pile) = (*pile)->next;
		i++;
	}
	size = i;
	while (*pile)
	{
		if ((*pile)->rank >= debut && (*pile)->rank <= fin)
			j = i + size;
		(*pile) = (*pile)->next;
		size++;
	}
	*pile = tmp;
	if (i <= (size - j))
		r(pile, c);
	else
		rrr(pile, c);
}

void	sort(t_pile **pile_a, t_pile **pile_b)
{
	int	size;
	int	div;
	int	rank;
	int	section;

	size = ft_plsize((*pile_a));
	div = ((size < 100) * 4 + !(size < 100) * 5);
	rank = 1;
	section = 1;
	while ((*pile_a))
	{
		while (rank <= (size / div) * section && rank <= size)
		{
			if ((*pile_a)->rank >= (((size / div) * section) - (size / div)) && \
				(*pile_a)->rank <= (size / div) * section && *pile_a)
			{
				p(pile_a, pile_b, 'b');
				rank++;
			}
			else if (*pile_a)
				direction_inter(pile_a, 'a', ((size / div) * section) - \
						(size / div), (size / div) * section);
		}
		section++;
	}
}
