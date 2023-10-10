/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:26:37 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/17 12:46:46 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	int	len;
	char *cpy;

	len = 0;
	if (!src)
		return (0);
	while (src[len])
		len ++;
	cpy = malloc(sizeof(char) * (len + 1));
	len = 0;
	while (src[len])
	{
		cpy[len] = src[len];
		len++;
	}
	cpy[len] = '\0';
	return (cpy);
}

#include <stdio.h>

int	main()
{
	char src[] = "Salut ca va bien?";
	printf("%s", ft_strdup(src));
}
