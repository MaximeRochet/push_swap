/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:26:50 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 14:11:33 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

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

void	ft_pldelone(t_pile *pile, void (*del)(int))
{
	if (pile)
	{
		(*del)(pile->content);
		(*del)(pile->rank);
		free(pile);
	}
}

void	ft_plclear(t_pile **pile, void (*del)(int))
{
	t_pile	*tmp;

	if (pile)
	{
		while (*pile)
		{
			tmp = (*pile)->next;
			ft_pldelone(*pile, del);
			(*pile) = tmp;
		}
	}
}

t_pile	*ft_pllast(t_pile *pile)
{
	if (!pile)
		return (NULL);
	while (pile->next)
	{
		pile = pile->next;
	}
	return (pile);
}
