/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:49:39 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/08 17:38:57 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if ((str[a] > 64 && str[a] < 91) || (str[a] > 96 && str[a] < 123))
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
	char str[9] = "";
	a = ft_str_is_alpha(str);
	printf("%d", a);
}
