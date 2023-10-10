/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:58:54 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/14 19:41:37 by vdecleir         ###   ########.fr       */
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

#include <stdio.h>

int	main()
{
	printf("%d", ft_is_prime(49));
}
