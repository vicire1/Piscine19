/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:34:21 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/21 18:10:54 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	if (!str)
		return (0);
	while (str[a])
		a++;
	return (a);
}

char	*ft_strdup(char *str)
{
	char	*cpy;
	int		a;

	a = 0;
	if (!str)
		return (0);
	cpy = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!cpy)
		return (NULL);
	while (str[a])
	{
		cpy[a] = str[a];
		a++;
	}
	cpy[a] = '\0';
	return (cpy);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int			a;
	t_stock_str	*tab;

	a = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (a < ac)
	{
		tab[a].size = ft_strlen(av[a]);
		tab[a].str = av[a];
		tab[a].copy = ft_strdup(av[a]);
		a++;
	}
	tab[a].str = 0;
	return (tab);
}

int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
}
