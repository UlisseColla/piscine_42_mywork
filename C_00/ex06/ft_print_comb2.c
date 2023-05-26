/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:51:32 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/16 10:15:28 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a != '9' || b != '8' || c != '9' || d != '9')
		write(1, ", ", 2);
}

void	print_num(char a, char b, char c, char d)
{
	while (c <= '9' && d <= ':')
	{
		if (c == '9' && d == ':')
		{
			break ;
		}
		if (c <= '9' && d == ':')
		{
			c++;
			d = '/';
			while (++d <= '9')
			{
				ft_putchar(a, b, c, d);
			}
		}
		else
		{
			while (++d <= '9')
			{
				ft_putchar(a, b, c, d);
			}
		}
	}
}

void	ft_print_comb2(void)
{
	char	a_1;
	char	a_2;
	char	b_1;
	char	b_2;

	a_1 = '0';
	a_2 = '/';
	b_1 = '0';
	while (a_1 <= '9' && ++a_2 <= ':')
	{
		if (a_1 <= '9' && a_2 <= '9')
		{
			b_1 = a_1;
			b_2 = a_2;
			print_num(a_1, a_2, b_1, b_2);
			if (a_2 == '9')
			{
				a_2 = '/';
				a_1++;
			}
		}
	}
}
