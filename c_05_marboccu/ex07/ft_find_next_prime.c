/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marboccu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:14:55 by marboccu          #+#    #+#             */
/*   Updated: 2023/05/24 14:15:56 by marboccu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	i = 5;
	if (nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb <= 0)
		return (0);
	else if (nb % 2 == 0 || nb % (i + 2) == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (ft_is_prime(nb))
		return (nb);
	i = 1;
	while (!ft_is_prime(nb + i))
		i++;
	return (nb + i);
}
