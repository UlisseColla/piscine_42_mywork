/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:52:48 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/30 17:57:50 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i] != '\0')
		i++;
	i = 0;
	s = malloc(sizeof(char) * (i + 1));
	while (src[i] != '\0')
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
/*
int main()
{
	char prova[] = "";
	printf("%s\n", ft_strdup(prova));
}*/
