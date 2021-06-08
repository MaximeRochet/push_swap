/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:18:11 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 11:53:21 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void free_tab(char **tab)
{
	int i;

	i = -1;
	while(tab[++i])
		free(tab[i]);
	free(tab);
}

int	ft_char_isdigit(char *str)
{ 
	int	i;
	int	y;
	char **tab;

	tab = ft_split(str, ' ');
	i = -1;
	y = -1;;
	while (tab[++y])
	{	
		if (ft_atolli(tab[y]) > INT_MAX || ft_atolli(tab[y]) < INT_MIN)
			return (0);
		if (tab[y][0] == '-' &&  ft_isdigit(tab[y][1]))
			i++;
		else if (ft_isdigit(tab[y][0]) == '-')
			return(0);
		while(tab[y][++i])
		{
			if(tab[y][i] != ' ' && !ft_isdigit(tab[y][i]))
				return(0);
		}
		i = -1;
	}
	free_tab(tab);
	return (1);
}

int	verif_doublons(t_pile *pile)
{
	t_pile	*pile_deux;
	int		coffre;

	pile_deux = pile;
	while (pile)
	{
		coffre = (*pile).content;
		pile_deux = (*pile_deux).next;
		while (pile_deux)
		{
			if ((*pile_deux).content == coffre)
				return (0);
			pile_deux = (*pile_deux).next;
		}
		pile = (*pile).next;
		pile_deux = pile;
	}
	return (1);
}
