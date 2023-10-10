/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:35:57 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/07 17:36:37 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
	a = ft_str_is_uppercase(str);
	printf("%d", a);
}
