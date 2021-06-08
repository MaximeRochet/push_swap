/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 14:10:26 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 11:51:38 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_pile	*ft_plnew(int content, int rank)
{
	t_pile	*new_elem;

	new_elem = ft_calloc(sizeof(t_pile), 1);
	if (!(new_elem))
		return (0);
	(*new_elem).content = content;
	(*new_elem).rank = rank;
	(*new_elem).next = NULL;
	return (new_elem);
}

int	ft_plsize(t_pile *pile)
{
	int	size;

	size = 0;
	while (pile)
	{
		pile = pile->next;
		size++;
	}
	return (size);
}

void	print_pile(t_pile *pile)
{
	printf("\n");
	while (pile)
	{
		printf("content = %d rank = %d\n", (*pile).content, (*pile).rank);
		pile = (*pile).next;
	}
}

void free_pile(t_pile **pile)
{
	t_pile *tmp;

	while(*pile)
	{
		tmp = (*pile);
		free((*pile));
		(*pile) = (*tmp).next;
	}
	(*pile) = NULL;
}
