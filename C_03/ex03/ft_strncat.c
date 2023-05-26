/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:32:06 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/23 10:47:16 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i] && i < nb)
	{	
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*int main()
{
	char dest[100] = "ciao ";
	char src[] = "a te e a tutti gli altri.";
	printf("%s\n", ft_strncat(dest, src, 40));
}*/
