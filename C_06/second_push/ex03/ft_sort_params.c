/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ucolla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 10:06:24 by ucolla            #+#    #+#             */
/*   Updated: 2023/05/28 15:26:47 by ucolla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

void	ft_sort_argv(int argc, char *argv[])
{
	char	*swap;
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (j < argc)
	{
		while ((i + 1) < argc)
		{
			if (ft_strcmp(argv[i + 1], argv[i]) > 0)
				i++;
			else
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				i++;
			}
		}
		i = 0;
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 1;
	ft_sort_argv(argc, argv);
	while (a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
