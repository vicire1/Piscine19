/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:04:11 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/17 13:34:00 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	a;
	int	*btw;

	a = 0;
	if (min >= max)
	{
		btw = 0;
		return (btw);
	}
	btw = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		btw[a] = min;
		a++;
		min++;
	}
	return (btw);
}

#include <stdio.h>

int	main()
{
	int *btw;
	int a;
	int min;
	int max;
	a = 0;
	min = -5;
	max = 5;
	btw = ft_range(min, max);
	while (min < max)
	{
		printf("%d\n", btw[a]);
		a++;
		min++;
	}
}

