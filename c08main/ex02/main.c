/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:10:37 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/20 18:13:06 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	a = -5;
	b = 5;
	printf("%d\n", ABS(a));
	printf("%d\n", ABS(b));
}
