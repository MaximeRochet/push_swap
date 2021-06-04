/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:06:42 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/04 16:40:57 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a; 
	t_pile *pile_b;
	int size;

	pile_a = init_pilea(ac, av);
	pile_b = NULL;
	if(!pile_a)
		return(0);
	pile_b = NULL;
	size = ft_plsize(pile_a);
	/*
	   printf("pile A");
	   print_pile(pile_a);
	   printf("pile B");
	   print_pile(pile_b);
	   */
	if (size <= 5 && ! is_sort(pile_a))
		small_sort(&pile_a, &pile_b);
	else if (! is_sort(pile_a))
	{
		sort(&pile_a, &pile_b);	
		sort_deux(&pile_a, &pile_b);
	}
	
	   printf("pile A");
	   print_pile(pile_a);
	   printf("pile B");
	   print_pile(pile_b);

	return(0);
}
