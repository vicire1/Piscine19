/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:26:13 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/07 17:32:10 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 47 && str[a] < 58)
		{
			a++;
		}
		else
			return (0);
	}
	return (1);
}

int 	main()
{
	int a;
	char str[9] = "154e2549";
	a = ft_str_is_numeric(str);
	printf("%d", a);
}
