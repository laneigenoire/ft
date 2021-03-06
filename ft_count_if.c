/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 23:46:02 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 23:46:13 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i][0] != '0')
	{
		if (f(tab[i]) == 1)
			nb++;
		i++;
	}
	return (nb);
}
