/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deplacement.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 15:07:42 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 14:49:33 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include  "includes/push_swap.h"

void	s(t_pile **pile, char c)
{
	t_pile	*tmp;

	tmp = (*pile);
	(*pile) = (*pile)->next;
	(*tmp).next = (*(*tmp).next).next;
	(*pile)->next = tmp;
	if (c == 'a')
		printf("sa\n");
	if (c == 'b')
		printf("sb\n");
}

void	ss(t_pile **pile_a, t_pile **pile_b)
{
	s(pile_a, 'c');
	s(pile_b, 'c');
	printf("ss\n");
}

void	p(t_pile **pile_un, t_pile **pile_deux, char c)
{
	t_pile	*tmp;

	tmp = (*pile_un)->next;
	(*pile_un)->next = (*pile_deux);
	(*pile_deux) = (*pile_un);
	(*pile_un) = tmp;
	if (c == 'a')
		printf("pa\n");
	if (c == 'b')
		printf("pb\n");
}

void	r(t_pile **pile, char c)
{
	t_pile	*tmp;

	tmp = (*pile);
	(*pile) = ft_pllast((*pile));
	(*pile)->next = tmp;
	(*pile) = (*tmp).next;
	(*tmp).next = NULL;
	if (c == 'a')
		printf("ra\n");
	if (c == 'b')
		printf("rb\n");
}

void	rr(t_pile **pile_a, t_pile **pile_b)
{
	r(pile_a, 'c');
	r(pile_b, 'c');
	printf("rr\n");
}
