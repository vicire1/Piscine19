/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 12:47:49 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/12 13:55:33 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		a = nb;
		a *= ft_recursive_factorial(nb - 1);
	}
	return (a);
}

#include <stdio.h>

int	main()
{
	printf("%d", ft_recursive_factorial(5));
}
