/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:52:29 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/09 11:35:37 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlow(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		if (str[a] > 64 && str[a] < 91)
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	ft_strlow(str);
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - 32;
		a++;
	}
	while (str[a])
	{
		if (str[a] > 96 && str[a] < 123)
		{
			if (str[a - 1] > 31 && str[a - 1] < 48)
				str[a] = str[a] - 32;
			if (str[a - 1] > 57 && str[a - 1] < 65)
				str[a] = str[a] - 32;
			if (str[a - 1] > 90 && str[a - 1] < 97)
				str[a] = str[a] - 32;
			if (str[a - 1] > 122 && str[a - 1] < 127)
				str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}

int	main()
{
	char str[25] = "saluT CA 42va -oj42 pHGF";

	ft_strcapitalize(str);
	write(1, str, 25);
}

