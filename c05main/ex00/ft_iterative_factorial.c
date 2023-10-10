/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:24:05 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/12 11:54:46 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int b;

	a = 1;
	b = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (b < nb)
	{
		a = a * (b + 1);
		b++;
	}
	return (a);
}

#include <stdio.h>

int 	main()
{
	printf("%d", ft_iterative_factorial(17));
}
