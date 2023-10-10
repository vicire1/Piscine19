/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:40:50 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/07 20:28:25 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 96 && str[a] < 123)
			str[a] = str[a] - 32;
		a++;
	}
	return (*str);
}

int	main()
{
	int a;
	char str[15] = "H54sGKjxyopK9";

	ft_strupcase(str);
	write(1, str, 15);
}
