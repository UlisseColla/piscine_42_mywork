/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 17:37:19 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/19 10:05:02 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = -1;
	a = 1;
	while (str[++i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (a == 1 && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				a = 0;
			}
			else if (a == 0 && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else
				a = 0;
		}
		else
			a = 1;
	}
	return (str);
}
