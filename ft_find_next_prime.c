/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 12:24:38 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 12:25:01 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		n;
	int		b;

	if (nb <= 0 || nb == 1)
		nb = 2;
	n = 2;
	while (n <= nb / 2)
	{
		b = nb / n;
		if (n * b == nb)
			return (ft_find_next_prime(nb + 1));
		n++;
	}
	return (nb);
}
