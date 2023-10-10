/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 10:47:45 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/24 11:50:06 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_charset(char c, char *charset)
{
	int	a;

	a = 0;
	while (charset[a])
	{
		if (c == charset[a])
			return (1);
		a++;
	}
	return (0);
}

int	nbstr(char *str, char *charset)
{
	int	a;
	int	nbr;

	a = 0;
	nbr = 0;
	while (str[a])
	{
		if (!check_charset(str[a], charset))
		{
			if (check_charset(str[a + 1], charset) || str[a + 1] == '\0')
				nbr++;
		}
		a++;
	}
	return (nbr);
}

int	strlen_split(char *str, char *charset)
{
	int	a;

	a = 0;
	while (!check_charset(str[a], charset) && str[a])
		a++;
	return (a);
}

int	cpy_in_tab(char **tab, char *str, char *charset)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	if (!tab)
		return (0);
	while (b < nbstr(str, charset))
	{
		c = 0;
		while (check_charset(str[a], charset) && str[a])
			a++;
		tab[b] = malloc(sizeof(char) * (strlen_split(&str[a], charset) + 1));
		if (tab[b] == NULL)
			return (0);
		while (!check_charset(str[a], charset) && str[a])
		{
			tab[b][c] = str[a];
			a++;
			c++;
		}
		tab[b][c] = '\0';
		b++;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = NULL;
	if (!str || !charset)
		return (NULL);
	tab = malloc(sizeof(char *) * (nbstr(str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	if (!cpy_in_tab(tab, str, charset))
		return (NULL);
	tab[nbstr(str, charset)] = 0;
	return (tab);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	a;
	char **tab;

	a = 0;
	if (argc > 10)
		return (0);
	tab = ft_split(argv[1], argv[2]);
	while (tab[a] != 0)
	{
		printf("%s\n", tab[a]);
		a++;
	}	
}
