/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:52:56 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/21 18:03:37 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

void	ft_putnbr(int nb)
{
	int	a;

	a = 0;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb = nb + 48;
		write(1, &nb, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	a;

	a = 0;
	while (par[a].str != 0)
	{
		ft_putstr(par[a].str);
		write(1, "\n", 1);
		ft_putnbr(par[a].size);
		write(1, "\n", 1);
		ft_putstr(par[a].copy);
		write(1, "\n", 1);
		a++;
	}
}
