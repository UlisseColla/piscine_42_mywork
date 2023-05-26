/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:49:04 by fzucconi          #+#    #+#             */
/*   Updated: 2023/05/17 14:49:07 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *s)
{
	int		sign;
	long	slz;

	sign = 1;
	slz = 0;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	while (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9' && *s != '\0')
	{
		slz = slz * 10 + (*s - '0');
		s++;
	}
	return (sign * (int)slz);
}

/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	printf("%d\n", ft_atoi(argv[argc - 1]));
	return 0;
}*/