/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:01:47 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 21:35:06 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**frame(char *argv[]);
int	**create_matrix(void);

void	check_if_1_and_2(int**matrix, int**my_frame, int i, int j)
{
	if (i == 0)
	{
		if (my_frame[i][j] == 1 && my_frame[i + 1][j] == 2)
			matrix[3][j] = 3;
		if (my_frame[i][j] == 2 && my_frame[i + 1][j] == 1)
			matrix[0][j] = 3;
	}
	if (i == 2)
	{
		if (my_frame[i][j] == 1 && my_frame[i + 1][j] == 2)
			matrix[j][3] = 3;
		if (my_frame[i][j] == 2 && my_frame[i + 1][j] == 1)
			matrix[j][0] = 3;
	}
}

int	**put_3(int**matrix, char*argv[])
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
				check_if_1_and_2(matrix, my_frame, i, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (matrix);
}
