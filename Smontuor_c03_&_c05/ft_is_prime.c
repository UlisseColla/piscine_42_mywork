/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:56:54 by smontuor          #+#    #+#             */
/*   Updated: 2023/05/23 16:51:18 by smontuor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_divisor(long nb)
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
	return (check_divisor(nb));
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av) 
{
	long number = 2147483641;

	long result = ft_is_prime(number);

	if (result)
		printf("%ld è un numero primo\n", result);
	else
		printf("%ld non è un numero primo\n", result);

	return 0;
}
*/