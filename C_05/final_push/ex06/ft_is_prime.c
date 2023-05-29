/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:31:15 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/27 18:48:04 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
/*
int main()
{
	printf("%d\n", ft_is_prime(80));
	printf("%d\n", ft_is_prime(13));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(2147483650));
}*/
