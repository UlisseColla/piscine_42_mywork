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

void	check_2_and_2_col(int**matrix, int**frame, int i, int j);
void	check_2_and_2_row(int**matrix, int**frame, int i, int j);
void	check_2_and_3_col(int**matrix, int**frame, int i, int j);
void	check_3_and_2_col(int**matrix, int**frame, int i, int j);
void	check_2_and_3_row(int**matrix, int**frame, int i, int j);
void	check_3_and_2_row(int**matrix, int**frame, int i, int j);

int	**cross_check_for_value_3(int**matrix, int**frame)
{
	int	i;
	int	j;

	i = -1;
	j = -1;
	while (++i < 2)
	{
		while (++j < 4)
		{
			if (i == 0)
			{
				check_2_and_3_col(matrix, frame, i, j);
				check_3_and_2_col(matrix, frame, i, j);
				check_2_and_2_col(matrix, frame, i, j);
			}
			if (i == 1)
			{
				check_2_and_3_row(matrix, frame, i, j);
				check_3_and_2_row(matrix, frame, i, j);
				check_2_and_2_row(matrix, frame, i, j);
			}
		}
	}
	return (matrix);
}
