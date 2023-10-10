/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:37:15 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/07 17:39:33 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 31 && str[a] < 127)
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
	a = ft_str_is_printable(str);
	printf("%d", a);
}
