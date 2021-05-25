/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:06:42 by mrochet           #+#    #+#             */
/*   Updated: 2021/05/25 14:21:21 by mrochet          ###   ########lyon.fr   */
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
	print_pile(pile_a);
	return(0);
}


