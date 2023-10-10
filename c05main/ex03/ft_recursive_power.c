/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:58:35 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/15 17:28:26 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = 0;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power + 1 > 1)
	{
		a = nb;
		a = a * ft_recursive_power(nb, power - 1);
	}
	return (a);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_recursive_power(-5, 3));
}
