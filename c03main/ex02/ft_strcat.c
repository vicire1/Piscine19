/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:15:42 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/10 17:32:46 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int b;

	a = 0;
	b = 0;
	if (!dest || !src)
		return (0);
	while (dest[a])
		a++;
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*int	main()
{
	char dest[20] = "Vic";
	char src[4] = "tor";
	write (1, ft_strcat(dest, src), 15);
	printf("%d", dest[4]);
}*/
