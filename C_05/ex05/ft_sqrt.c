/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 18:09:45 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/27 18:30:13 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		start;
	int		end;
	long	mid;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	start = 0;
	end = nb;
	while (start <= end)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (0);
}
/*
int main()
{
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(81));
	printf("%d\n", ft_sqrt(1));
}*/
