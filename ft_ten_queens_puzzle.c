/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzles.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 17:08:06 by fdonati           #+#    #+#             */
/*   Updated: 2023/05/28 18:42:34 by fdonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchess(char w)
{
	write(1, &w, 1);
}

void	ft_draw_agree_puzzle(int *board)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchess(board[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

int	ft_perpetual_check_puzzle(int *board, int y, int x)
{
	int	i;

	i = 0;
	while (i < y)
	{
		if (board[i] == x || board[i] + i == x + y
			|| board[i] - i == x - y)
			return (0);
		i++;
	}
	return (1);
}

int	*ft_castling_puzzle(int *draws, int *board, int y)
{
	int	x;

	x = 0;
	if (y == 10)
	{
		ft_draw_agree_puzzle(board);
		(*draws)++;
		return (draws);
	}
	while (x < 10)
	{
		if (ft_perpetual_check_puzzle(board, y, x) == 1)
		{
			board[y] = x;
			draws = ft_castling_puzzle(draws, board, y + 1);
		}
		x++;
	}
	return (draws);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	y;
	int	draws;

	y = 0;
	draws = 0;
	ft_castling_puzzle(&draws, board, y);
	return (draws);
}
/*
int	main()
{
	int	draws;
	int	x;
	int	y;
	char	w;

	x = 0;
	y = 0;
	draws = ft_ten_queens_puzzle();
	x = draws;
	y = 1;
	if (draws < 0)
	{
		draws = draws * -1;
		write(1, "-", 1);
	}
	while (draws / y >= 10)
	{
		y = y * 10;
	}
	while (y > 0)
	{
		x = draws / y;
		draws = draws % y;
		y = y / 10;
		w = x + '0';
		write(1, &w, 1);
	}
	return 0;
}
*/
