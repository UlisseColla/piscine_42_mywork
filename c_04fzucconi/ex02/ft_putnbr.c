/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:25:00 by fzucconi          #+#    #+#             */
/*   Updated: 2023/05/18 14:25:02 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
long	ft_check_nbr(long n);

void	ft_putnbr(int nb)
{
	long	buf;
	int		dim;
	char	res[10];

	buf = nb;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	else
	{
		buf = ft_check_nbr(buf);
		dim = 0;
		while (buf != 0)
		{
			res[dim] = '0' + (buf % 10);
			dim++;
			buf /= 10;
		}
		while (dim--)
		{
			ft_putchar(res[dim]);
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_check_nbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

/*int main()
{
	ft_putnbr(-2147483648);
	return (0);
}*/