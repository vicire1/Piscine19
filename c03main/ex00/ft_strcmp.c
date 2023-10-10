/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:03:11 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/10 17:28:45 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[a] == s2[a] && s1[a] && s2[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
int	main ()
{
	char s1[4] = "ABC";
	char s2[4] = "ABBBB";

	printf("%d", ft_strcmp(s1, s2));
}*/
