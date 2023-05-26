/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:51:54 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 19:05:43 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	check_2_and_3_col(int**matrix, int**frame, int i, int j)
{
	int	k;

	k = 0;
	if (frame[i][j] == 2 && frame[i + 1][j] == 3)
	{
		if (!(matrix[j][0]) && !(matrix[j][2]))
		{
			while (k < 4)
			{
				if (matrix[0][k] == 3 && k != j)
					matrix[j][2] = 3;
				k++;
			}
			k = 0;
			while (k < 4)
			{
				if (matrix[2][k] == 3 && k != j)
					matrix[j][0] = 3;
				k++;
			}
		}
	}
}

void	check_3_and_2_col(int**matrix, int**frame, int i, int j)
{
	int	k;

	k = 0;
	if (frame[i][j] == 3 && frame[i + 1][j] == 2)
	{
		if (!(matrix[j][1]) && !(matrix[j][3]))
		{
			while (k < 4)
			{
				if (matrix[3][k] == 3 && k != j)
					matrix[j][1] = 3;
				k++;
			}
			k = 0;
			while (k < 4)
			{
				if (matrix[1][k] == 3 && k != j)
					matrix[j][3] = 3;
				k++;
			}
			k = 0;
		}
	}
}

void	check_2_and_3_row(int**matrix, int**frame, int i, int j)
{
	int	k;

	k = 0;
	if (frame[i][j] == 2 && frame[i + 1][j] == 3)
	{
		if (!(matrix[0][j]) && !(matrix[2][j]))
		{
			while (k < 4)
			{
				if (matrix[k][0] == 3 && k != j)
					matrix[2][j] = 3;
				k++;
			}
			k = 0;
			while (k < 4)
			{
				if (matrix[k][2] == 3 && k != j)
					matrix[0][j] = 3;
				k++;
			}
			k = 0;
		}
	}
}

void	check_3_and_2_row(int**matrix, int**frame, int i, int j)
{
	int	k;

	k = 0;
	if (frame[i][j] == 3 && frame[i + 1][j] == 2)
	{
		if (!(matrix[1][j]) && !(matrix[3][j]))
		{
			while (k < 4)
			{
				if (matrix[k][3] == 3 && k != j)
					matrix[1][j] = 3;
				k++;
			}
			k = 0;
			while (k < 4)
			{
				if (matrix[k][1] == 3 && k != j)
					matrix[3][j] = 3;
				k++;
			}
			k = 0;
		}
	}
}
