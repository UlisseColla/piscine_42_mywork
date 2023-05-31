/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:30:07 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/30 12:14:48 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
		
	return (i);
}

/*char	*do_half_the_magic(char **strs,char *ret, int k, int j, int i)
{
	while (strs[k][j] != '\0')
		{
			ret[i] = strs[k][j];
			i++;
			j++;
		}
	return (ret);
}

char	*do_the_rest_of_the_magic(char *sep, char *ret, int i, int l)
{
	while (sep[l] != '\0')
	{
		ret[i] = sep[l];
		l++;
		i++;
	}
	return (ret);
}*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	k;
	int	j;
	int	l;
	char	*ret;

	j = 0;
	k = 0;
	i = ft_strlen(sep) * (size - 1);
	while (k < size)
	{
		j += ft_strlen(strs[k]);
		k++;
	}
	ret = (char *)malloc(sizeof(char) * (i + j));
	k = 0;
	j = 0;
	l = 0;
	i = 0;
	while (k < size)
	{
		while (strs[k][j] != '\0')
		{
			ret[i] = strs[k][j];
			i++;
			j++;
		}
		j = 0;
		if (k != (size - 1))
		{
			while (sep[l] != '\0')
			{
				ret[i] = sep[l];
				l++;
				i++;
			}
		}
		l = 0;
		k++;
	}
	printf("%s\n", ret);
	return (ret);
}

int main()
{
	char 	*prova[3];
	
	prova[0] = "ciao";
	prova[1] = "sono";
	prova[2] = "coglione";
	ft_strjoin(3, prova, "ok");
}
