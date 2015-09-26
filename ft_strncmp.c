/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 12:28:29 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/25 21:07:22 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i <= n)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int		main()
{
	char *a, *b;
	unsigned int c;

	a = "tserenbadamganbat";
	b = "tserabbadam";
	c = 5;
	printf("%d\n", ft_strncmp(a, b, c));
	printf("%d\n", strncmp(a, b, c));
	return (0);
	}*/
