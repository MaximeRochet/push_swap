/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:18:11 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 16:39:07 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_char_isdigit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((!ft_isdigit(str[i]) && str[i] != 32) || (str[i] == '-' && \
					((str[i - 1] != ' ') || !ft_isdigit(str[i + 1]))))
			return (0);
	}
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
