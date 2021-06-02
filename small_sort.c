/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:07:08 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/02 18:23:34 by mrochet          ###   ########lyon.fr   */
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

void small_sort_trois(t_pile **pile)
{
	printf("yi");
}

void small_sort(t_pile **pile)
{
	int size;

	size = ft_plsize((*pile));
	if (size == 3 && !is_sort((*pile)))
		small_sort_trois(pile);

}
