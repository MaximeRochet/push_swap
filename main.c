/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:06:42 by mrochet           #+#    #+#             */
/*   Updated: 2021/05/28 14:11:07 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int ac, char **av)
{
	t_pile *pile_a; 
	t_pile *pile_b;

	pile_a = init_pilea(ac, av);
	if(!pile_a)
		return(0);
	pile_b = NULL;
	sort(&pile_a, &pile_b);
	printf("pile A");
	print_pile(pile_a);
	printf("pile B");
	print_pile(pile_b);
	return(0);
}
