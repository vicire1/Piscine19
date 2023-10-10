/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:12:37 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/11 10:46:14 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int a;

	a = 0;
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (0);
	while (s1[a] == s2[a] && s1[a] && s2[a] && a < (n - 1))
		a++;
	return (s1[a] - s2[a]);
}
/*int	main ()
{
	char s1[4] = "ABL";
	char s2[4] = "ABBB";

	printf("%d", ft_strncmp(s1, s2, 3));
}*/
