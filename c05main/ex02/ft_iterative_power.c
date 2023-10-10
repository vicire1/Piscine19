/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:56:38 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/12 17:53:58 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	a;
	int	b;

	a = 1;
	b = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (a < power)
	{
		nb = b * nb;
		a++;
	}
	return (nb);
}

#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_power(0,4));
}
