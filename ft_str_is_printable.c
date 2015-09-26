/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:54:37 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 19:16:03 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (!str)
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 31)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char a[] = "ads=-==+ adsa";

	printf("%d\n", ft_str_is_printable(a));
	return (0);
}
