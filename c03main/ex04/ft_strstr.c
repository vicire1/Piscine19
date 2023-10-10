/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 21:38:55 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/22 16:22:38 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if(!str || !to_find)
		return (0);
	if (to_find[a] == '\0')
		return (str);
	while (str[a])
	{
		b = 0;
		while (str[a + b] == to_find[b])
		{
			b++;
			if (!to_find[b])
				return (&str[a]);		
		}
		a++;
	}
	return (0);
}

int	main()
{
	char str[50] = "ababhab";
	char *to_find = "abhab";

	write(1, ft_strstr(str, to_find), 21);
	return (0);
}
