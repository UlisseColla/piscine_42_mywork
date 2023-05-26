/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:43:44 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 21:06:46 by mmarconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**frame(char *argv[]);
int	**create_matrix(void);

void	check_if_1(int**matrix, int i, int j)
{
	if (i == 0)
		matrix[0][j] = 4;
	if (i == 1)
		matrix[3][j] = 4;
	if (i == 2)
		matrix[j][0] = 4;
	if (i == 3)
		matrix[j][3] = 4;
}

void	check_if_2_and_3(int**matrix, int**my_frame, int i, int j)
{
	if (i == 0)
	{
		if (my_frame[i][j] == 2 && my_frame[i + 1][j] == 3)
			matrix[1][j] = 4;
		if (my_frame[i][j] == 3 && my_frame[i + 1][j] == 2)
			matrix[2][j] = 4;
	}
	if (i == 2)
	{
		if (my_frame[i][j] == 2 && my_frame[i + 1][j] == 3)
			matrix[j][1] = 4;
		if (my_frame[i][j] == 3 && my_frame[i + 1][j] == 2)
			matrix[j][2] = 4;
	}
}

int	**put_4(int**matrix, char*argv[])
{
	int	**my_frame;
	int	i;
	int	j;

	my_frame = frame(argv);
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (i == 0 || i == 2)
				check_if_2_and_3(matrix, my_frame, i, j);
			if (my_frame[i][j] == 1)
				check_if_1(matrix, i, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (matrix);
}
