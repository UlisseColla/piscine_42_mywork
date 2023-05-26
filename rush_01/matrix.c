/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:36:03 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 15:17:52 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdlib.h>

int	**create_matrix(void)
{
	int	i;
	int	j;
	int	**matrix;

	i = 0;
	j = 0;
	matrix = (int **)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		matrix[i] = (int *)malloc(4 * sizeof(int));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			matrix[i][j] = 0;
			j++;
		}
		j = 0;
		i++;
	}
	return (matrix);
}

void	print_matrix(int**matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		write(1, "---------", 9);
		write(1, "\n", 1);
		while (j < 4)
		{
			matrix[i][j] += 48;
			write(1, "|", 1);
			write(1, &matrix[i][j], 1);
			j++;
		}
		write(1, "|\n", 2);
		j = 0;
		i++;
	}
	write(1, "---------", 9);
}
