/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 18:41:41 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 21:08:51 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;
	char	*c;

	a = (char *)(str);
	if (!*to_find)
		return (a);
	while (*str)
	{
		b = a;
		c = (char *)(to_find);
		while (*a && *c && *a == *c)
		{
			a++;
			c++;
		}
		if (!*c)
			return (b);
		a = b + 1;
	}
	return (0);
}

int		main(void)
{
	char	*d = "aaadsa";
	char	*e = "dsa";

	printf("%s\n", ft_strstr(d, e));
	return (0);
}
