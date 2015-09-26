/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 23:02:40 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/26 00:11:12 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strlowcase(char *av)
{
	int		i;

	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] >= 'A' && av[i] <= 'Z')
			av[i] += 32;
		i++;
	}
	return (av);
}

int		main(int argc, char **argv)
{
	int		i;

	argc = 0;
	argv[1] = ft_strlowcase(argv[1]);
	i = 1;
	if (argv[1][0] >= 'a' && argv[1][0] <= 'z')
		argv[1][0] -= 32;
	while (argv[1][i] != '\0')
	{
		if ((argv[1][i] < '0' || argv[1][i] > '9')
			&& (!(argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
			&& (argv[1][i] < 'a' || argv[1][i] > 'z'))
		{
			if (argv[1][i + 1] >= 'a' && argv[1][i + 1] <= 'z')
				argv[1][i + 1] -= 32;
		}
		i++;
	}
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
