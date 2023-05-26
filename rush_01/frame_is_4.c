/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame_is_4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:01:47 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 22:24:55 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**frame(char *argv[]);
void	print_matrix(int **matrix);

int	**i_1(int **my_matrix, int d)
{
	if (d == 0)
	{
		my_matrix[0][d] = 1;
		my_matrix[1][d] = 2;
		my_matrix[2][d] = 3;
		my_matrix[3][d] = 4;
	}
	return (my_matrix);
}

int	**i_2(int **my_matrix, int d)
{
	if (d == 1)
	{
		my_matrix[d][0] = 1;
		my_matrix[d][1] = 2;
		my_matrix[d][2] = 3;
		my_matrix[d][3] = 4;
	}
	return (my_matrix);
}

int	**i_3(int **my_matrix, int d)
{
	if (d == 2)
	{
		my_matrix[d][0] = 1;
		my_matrix[d][1] = 2;
		my_matrix[d][2] = 3;
		my_matrix[d][3] = 4;
	}
	return (my_matrix);
}

int	**i_4(int **my_matrix, int d)
{
	if (d == 3)
	{
		my_matrix[d][3] = 1;
		my_matrix[d][2] = 2;
		my_matrix[d][1] = 3;
		my_matrix[d][0] = 4;
	}
	return (my_matrix);
}

int	**frame_is_4(int**matrix, char*argv[])
{
	int	**my_frame;
	int	i;
	int	j;

	i = -1;
	j = -1;
	my_frame = frame(argv);
	while (++i < 4)
	{
		while (++j < 4)
		{
			if (my_frame[i][j] == 4)
			{	
				i_1(matrix, j);
				i_2(matrix, j);
				i_3(matrix, j);
				i_4(matrix, j);
			}
		}
		j = 0;
	}
	print_matrix(matrix);
	return (matrix);
}
