/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:06:42 by mrochet           #+#    #+#             */
/*   Updated: 2021/06/01 14:28:10 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a; 
	t_pile *pile_b;

	pile_a = init_pilea(ac, av);
	pile_b = NULL;
	
	if(!pile_a)
		return(0);
	pile_b = NULL;

/*	printf("pile A");
	print_pile(pile_a);
	printf("pile B");
	print_pile(pile_b);
*/
	sort(&pile_a, &pile_b);
	
/*	printf("pile A");
	print_pile(pile_a);
	printf("pile B");
	print_pile(pile_b);
*/	
	sort_deux(&pile_a, &pile_b);
/*
	printf("pile A");
	print_pile(pile_a);
	printf("pile B");
	print_pile(pile_b);
*/	
	return(0);
}
