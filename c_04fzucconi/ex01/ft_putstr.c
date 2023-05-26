/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzucconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:19:25 by fzucconi          #+#    #+#             */
/*   Updated: 2023/05/18 14:19:27 by fzucconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	if (*str == 0)
		return ;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main()
{
	ft_putstr("ciao");
	return 0;
}*/