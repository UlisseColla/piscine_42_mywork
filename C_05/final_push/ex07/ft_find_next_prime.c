/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:27:16 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/27 21:07:40 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_divisor(long nb)
{
	long	i;

	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (nb < 2)
		return (0);
	return (is_divisor(nb));
}

int	ft_find_next_prime(int nb)
{
	long	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (ft_is_prime(nb + i) != 1)
	{
		i++;
	}
	return (nb + i);
}
/*
int main()
{
	printf("%d\n", ft_find_next_prime(12));
	printf("%d\n", ft_find_next_prime(17));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(-123));
}*/
