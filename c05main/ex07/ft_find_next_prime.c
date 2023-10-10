/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 20:38:47 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/14 19:37:42 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	long	a;

	a = 2;
	if (nb < 2)
		return (0);
	while (a * a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb > 1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_find_next_prime(0));
}
