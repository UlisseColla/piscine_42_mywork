/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:16:38 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/29 11:18:35 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int			counter_minus;
	int			i;
	long int	c;

	counter_minus = 0;
	i = 0;
	c = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] < '0')
	{
		if (str[i] == '-')
			counter_minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		c = (c * 10) + (str[i] - '0');
		i++;
	}
	if ((counter_minus % 2) > 0)
		c = -c;
	return (c);
}
/*
int main()
{
	printf("%d\n", ft_atoi("       ++---++----3242asdas234234"));
}*/
