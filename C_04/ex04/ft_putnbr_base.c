/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 21:34:33 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/27 21:51:05 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	k;
	int	counter_base;
	int	nbr_to_print[100];

	k = 0;
	counter_base = 0;
	if (check_base(base))
	{
		while (base[counter_base] != '\0')
			counter_base++;
		if (nbr < 0)
		{
			nbr *= (-1);
			write(1, "-", 1);
		}
		while (nbr)
		{
			nbr_to_print[k] = nbr % counter_base;
			nbr /= counter_base;
			k++;
		}
		while (--k >= 0)
			ft_putchar(base[nbr_to_print[k]]);
	}
}
/*
int main()
{
	ft_putnbr_base(-123, "abcdefyg");

}*/
