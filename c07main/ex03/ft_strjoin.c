/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:56:39 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/21 18:54:12 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_strs(int size, char **strs)
{
	int	a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < size)
	{
		while (strs[a][b])
		{
			b++;
			c++;
		}
		a++;
		b = 0;
	}
	return (c);
}

int	len_sep(char *sep)
{
	int a;
	
	a = 0;
	while (sep[a])
		a++;
	return (a);
}

int	put_sep(int c, char *strtot, char *sep)
{
	int	b;

	b = 0;
	while (sep[b])
	{
		strtot[c] = sep[b];
		b++;
		c++;
	}
	return (c);
}

void	newstring(int size, char *strtot, char **strs, char *sep)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	while (a < size)
	{
		while (strs[a][b])
		{
			strtot[c] = strs[a][b];
			b++;
			c++;
		}
		b = 0;
		if (a < size - 1)
			c = put_sep(c, strtot, sep);
		a++;
	}
	strtot[c] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int lenstrs;
	int	lensep;
	char *strtot;

	if (size == 0)
	{
		strtot = 0;
		return (strtot);
	}
	lenstrs = len_strs(size, strs);
	lensep = len_sep(sep);
	strtot = malloc(sizeof(char) * (lenstrs + ((size - 1) * lensep) + 1));
	if (!strtot)
		return (0);
	newstring(size, strtot, strs, sep);
	return (strtot);
}

#include <stdio.h>

int	main()
{
	char *strs[10] = {"hfsj", "hfgskj", "hgsjhs"};
	printf("%s\n",  ft_strjoin(10, strs , "___"));
}
