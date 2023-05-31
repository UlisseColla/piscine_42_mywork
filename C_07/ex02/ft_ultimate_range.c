/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 14:51:31 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/29 17:46:51 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	result = *range;
	result = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		result = NULL;
		return (0);
	}
	if (!range)
		return (-1);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int main()
{
	int *arr;
	printf("%d\n", ft_ultimate_range(&arr, 99, 98));
}*/
