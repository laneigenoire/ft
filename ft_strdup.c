/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 21:48:03 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 22:03:06 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (!str)
		return (0);
	while ( src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char a[] = "lore";

	printf("%s\n", ft_strdup(a));
	printf("%s\n", strdup(a));
	return (0);
}
