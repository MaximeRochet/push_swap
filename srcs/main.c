/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:07:35 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/08 12:14:42 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a; 
	int size;

	pile_a = init_pilea(ac, av);
	pile_b = NULL;
	if(!pile_a)
		return(0);
	pile_b = NULL;
	size = ft_plsize(pile_a);
	if (size <= 5 && ! is_sort(pile_a))
		small_sort(&pile_a, &pile_b);
	else if (!is_sort(pile_a))
	{
		sort(&pile_a, &pile_b);	
		sort_deux(&pile_a, &pile_b);
	}
	free_pile(&pile_a);
	free_pile(&pile_b);
	return(0);
}
