/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:26:50 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 14:26:55 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pladd_back(t_pile **apile, t_pile *new)
{
	t_pile	*last_elem;

	if (apile)
	{
		if (!*apile)
		{
			*apile = new;
			return ;
		}
		last_elem = ft_pllast(*apile);
		last_elem->next = new;
	}
}

void	ft_pladd_front(t_pile **alst, t_pile *new)
{
	if (alst)
	{
		if (!new)
			return ;
		new->next = *alst;
		*alst = new;
	}
}

t_pile	*ft_pllast(t_pile *pile)
{
	if (!pile)
		return (NULL);
	while (pile->next)
		pile = pile->next;
	return (pile);
}
