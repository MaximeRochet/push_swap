/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:26:50 by mrochet           #+#    #+#             */
/*   Updated: 2021/05/25 14:43:17 by mrochet          ###   ########lyon.fr   */
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

/*
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
*/
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
/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*begin;

	if (lst)
	{
		begin = NULL;
		new = begin;
		while (lst)
		{
			new = ft_lstnew((*f)(lst->content));
			if (!new)
			{
				ft_lstclear(&begin, (*del));
				return (NULL);
			}
			ft_lstadd_back(&begin, new);
			lst = lst->next;
		}
		return (begin);
	}
	return (NULL);
}*/

t_pile	*ft_plnew(int content, int rank)
{
	t_pile	*new_elem;

	new_elem = calloc(sizeof(t_pile), 1);
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

void print_pile(t_pile *pile)
{
	while(pile)
	{
		printf("content = %d rank = %d\n" ,(*pile).content ,(*pile).rank);
		pile = (*pile).next;
	}

}
