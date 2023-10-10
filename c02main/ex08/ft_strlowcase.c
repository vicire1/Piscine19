/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:29:42 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/08 10:51:19 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 64 && str[a] < 91)
			str[a] = str[a] + 32;
		a++;
	}
	return (*str);
}

int	main()
{
	char str[15] = "H54sGKjLQopK9";

	ft_strlowcase(str);
	write(1, str, 15);
}
