/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:55:48 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/22 17:41:12 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;

	while (*str)
	{
		c = (unsigned char)(*str);
		if (c < 32 || c > 126)
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[c / 16], 1);
			write(1, &"0123456789abcdef"[c % 16], 1);
		}
		else
			write(1, &c, 1);
		str++;
	}
}
