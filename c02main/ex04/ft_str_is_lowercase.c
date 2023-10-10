/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:33:33 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/07 17:34:42 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 96 && str[a] < 123)
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
	a = ft_str_is_lowercase(str);
	printf("%d", a);
}
