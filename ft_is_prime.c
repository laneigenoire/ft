/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 12:24:06 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 12:24:27 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		n;
	int		b;

	if (nb <= 0 || nb == 1)
		return (0);
	n = 2;
	while (n < nb / 2)
	{
		b = nb / n;
		if (n * b == nb)
			return (0);
		n++;
	}
	return (1);
}