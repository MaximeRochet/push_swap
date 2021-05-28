/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_un.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 11:55:30 by mrochet           #+#    #+#             */
/*   Updated: 2021/05/28 13:46:26 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

/*int is_sort()
{

}
*/


void sort(t_pile **pile_a,t_pile **pile_b)
{
	int size;
	int div;
	int rank;
	int section;

	size = ft_plsize((*pile_a));
	div = ((size < 100)*4 + !(size < 100)*5);
	rank = 1;
	section = 1;
	while(((size/div)*section <= size))
	{
		printf("size = %d, div = %d  section = %d rank = %d\n", size, div, section, rank);
		printf("section de %d a %d, rank = %d\n",  (size/div)*section - (size/div),(size/div)*section, rank);
			
		while((rank >= (size/div)*section - (size/div)) && (rank < (size/div)*section))
		{
			printf("rank %d\n", rank);
			while((*pile_a)->rank != rank)
			{
				printf("pilea.rank = %d\n", (*pile_a)->rank);
				r(pile_a, 'a');
			}
			p(pile_a, pile_b, 'a');	
			rank++;
		}
		section++;
	}
}
