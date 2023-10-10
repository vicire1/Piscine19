/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:40:20 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/17 12:50:06 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	*btw;
	int	diff;

	diff = max - min;
	a = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	btw = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		btw[a] = min;
		a++;
		min++;
	}
	*range = btw;
	return (diff);
}

#include <stdio.h>

int	main()
{
	int *a;
	int min = -5;
	int max = 5;
	printf("there are %d int between min and max\n", ft_ultimate_range(&a, min, max));
	while(min < max)
	{
		printf("%d\n", *a);
		a++;
		min++;
	}
}
