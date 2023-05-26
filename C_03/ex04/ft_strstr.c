/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:47:47 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/23 14:15:08 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	if (!*to_find)
		return (str);
	while (str)
	{
		while (to_find[j] == str[j] && str[j])
		{
			if (to_find[j + 1] == '\0')
				return (str);
			j++;
		}
		str++;
	}
	return (0);
}
int main()
{
	char str[] = "xxxxciaoxxxx";
	char to_find[] = "xc";
	printf("%s\n", ft_strstr(str, to_find));
}
