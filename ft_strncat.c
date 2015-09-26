/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 20:08:22 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 20:41:54 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int dest_n;

	i = 0;
	dest_n = 0;
	while(dest[dest_n])
		dest_n++;
	while (src[i] && i < nb)
	{
			dest[dest_n] = src[i];
			dest_n++;
			i++;
	}
	dest[dest_n] = '\0';
	return (dest);
}

int main()
{
	char a[12] = "tseren";
	char b[] = "badam";
	int i;

	i = 2;
	printf("%s\n", ft_strncat(a, b, i));
	return (0);
}
