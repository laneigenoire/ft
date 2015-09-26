/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:17:12 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 18:17:53 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    if (!str)
        return (1);
    while (str[i] != '\0')
    {
        if (str[i] < 'A' || str[i] > 'Z')
            return (0);
        i++;
    }
    return (1);
}

int main()
{
    char a[] = "";

    printf("%d\n", ft_str_is_uppercase(a));
    return (0);
}
