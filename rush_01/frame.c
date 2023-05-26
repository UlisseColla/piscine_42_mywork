/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 13:36:59 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/21 21:43:03 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ret_frame_with_values(char *argv[], int **frame, int i, int number_count, int argc)
{
	if (argv[argc - 1][i] >= '0' && argv[argc - 1][i] <= '9')
	{
		if (number_count < 4)
			frame[0][number_count] = argv[1][i] - '0';
		else if (number_count < 8)
			frame[1][number_count - 4] = argv[1][i] - '0';
		else if (number_count < 12)
			frame[2][number_count - 8] = argv[1][i] - '0';
		else
			frame[3][number_count - 12] = argv[1][i] - '0';
		number_count++;
	}
}

int	**frame(char *argv[], int argc)
{
	int	number_count;
	int	**frame;
	int	i;

	number_count = 0;
	i = 0;
	frame = (int **)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		frame[i] = (int *)malloc(4 * sizeof (int));
		i++;
	}
	i = 0;
	while (argv[argc -1][i] != '\0')
	{	
		ret_frame_with_values(argv, frame, i, number_count, argc);
		i++;
	}
	return (frame);
}
