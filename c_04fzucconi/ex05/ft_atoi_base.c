/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:13:55 by fzucconi          #+#    #+#             */
/*   Updated: 2023/05/18 17:13:57 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_size(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

long	return_slz(int b_size, int i, char *str, char *base)
{
	int		j;
	long	slz;

	slz = 0;
	while (str[i])
	{	
		j = 0;
		while (base[j])
		{	
			if (str[i] == base[j])
			{
				slz = b_size * slz + j;
				i++;
				j = 0;
			}
			else
				j++;
		}
	}
	return (slz);
}

int	ft_atoi_base(char *str, char *base)
{
	int		b_size;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	b_size = base_size(base);
	if (!b_size)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	return ((int)return_slz(b_size, i, str, base) * sign);
}
/*#include <stdio.h>
int	main()
{
	printf("%d\n", ft_atoi_base("10", ""));
	return 0;
}*/
