/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 22:03:33 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 22:15:43 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	
	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		return (tab);
}

int main()
{
	printf("%d\n", ft_range(3, 10));
	return (0);
}
