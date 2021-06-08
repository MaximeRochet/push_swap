/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_pile_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:15:43 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 13:21:20 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

t_pile	*rank_pilea(t_pile *pile)
{
	int		ref;
	int		rank;
	int		size_pile;
	t_pile	*pile_tmp;

	pile_tmp = pile;
	ref = biggest_content(pile);
	rank = 0;
	size_pile = ft_plsize(pile);
	while (++rank <= size_pile)
	{
		ref = biggest_content(pile);
		while (pile)
		{
			if ((*pile).content < ref && (*pile).rank == -1)
				ref = (*pile).content;
			pile = (*pile).next;
		}
		pile = pile_tmp;
		pile = fill_index(pile, rank, ref);
	}
	return (pile);
}

t_pile	*create_pilea(int ac, char**av, t_pile *pile_a)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (++y < ac)
	{
		while (av[y][i++])
		{
			ft_pladd_back(&pile_a, ft_plnew(ft_atoi(av[y] + i - 1), -1));
			while ((ft_isdigit(av[y][i]) || av[y][i] == '-' ) && av[y][i])
				i++;
			while (av[y][i] == 32 && av[y][i])
				i++;
		}
		i = 0;
	}
	return (pile_a);
}

t_pile	*fill_index(t_pile *pile, int rank, int ref)
{
	t_pile	*tmp_pile;

	tmp_pile = pile;
	while ((*pile).content != ref)
		pile = (*pile).next;
	(*pile).rank = rank;
	return (tmp_pile);
}

int	biggest_content(t_pile *pile)
{
	int	ref;

	ref = (*pile).content;
	while (pile)
	{
		if ((*pile).content > ref && (*pile).rank == -1)
			ref = (*pile).content;
		pile = (*pile).next;
	}
	return (ref);
}

t_pile	*init_pilea(int ac, char**av)
{
	int		y;
	t_pile	*pile;

	if (ac < 2)
		return (NULL);
	pile = NULL;
	y = ac;
	while (--y)
	{
		if (!ft_char_isdigit(av[y]))
		{
			printf("Error\n");
			return (NULL);
		}
	}
	pile = create_pilea(ac, av, pile);
	if (!verif_doublons(pile))
	{
		free_pile(&pile);
		printf("Error\n");
		return (NULL);
	}
	pile = rank_pilea(pile);
	return (pile);
}
