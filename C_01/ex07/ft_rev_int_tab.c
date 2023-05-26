/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:18:23 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/17 17:01:46 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		ft_swap(&tab[i], &tab[size]);
		size--;
		i++;
	}
}
