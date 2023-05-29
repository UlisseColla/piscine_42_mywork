/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smontuor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:42:40 by smontuor          #+#    #+#             */
/*   Updated: 2023/05/23 18:12:48 by smontuor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
#include <stdio.h>
int main() {
    int number = 2147483646;
    int result = ft_sqrt(number);

    if (result != 0)
        printf("La radice quadrata di %d è: %d\n", number, result);
    else
        printf("Nessuna radice quadrata intera per %d\n", number);

    return 0;
}
*/