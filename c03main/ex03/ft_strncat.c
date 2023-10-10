/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:13:45 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/10 18:00:33 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int b;

	a = 0;
	b = 0;
	if (!dest || !src)
		return (0);
	while (dest[a])
		a++;
	while (src[b] && b < nb)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

/*
int	main()
{
	int a = 0;
	char dest[10] = "Vic";
	char src[4] = "tor";
	ft_strncat(dest, src, 2);
	while (dest[a])
	{
		write (1, &dest[a], 1);
		a++;
	}
}*/
