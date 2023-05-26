/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:58:58 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/17 14:50:00 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	counter;
	int	counter2;

	counter2 = 1;
	counter = 0;
	size--;
	while (counter2 <= size)
	{
		while ((counter + 1) <= size)
		{
			if (tab[counter] < tab[counter + 1])
				counter++;
			else
			{
				swap = tab[counter];
				tab[counter] = tab[counter + 1];
				tab[counter + 1] = swap;
				counter++;
			}
		}
		counter = 0;
		counter2++;
	}
}
