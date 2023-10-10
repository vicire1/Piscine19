/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 19:44:30 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/20 17:16:22 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	verif_base(char *base)
{
	int	len;
	int	a;

	len = 0;
	if (!base)
		return (0);
	while (base[len])
	{
		a = len + 1;
		while (base[a])
		{
			if (base[a] == base[len])
				return (0);
			a++;
		}
		if (base[len] == '+' || base[len] == '-')
			return (0);
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	int			a;
	long int	nb;

	a = 0;
	len = 0;
	nb = (long int)nbr;
	len = verif_base(base);
	if (len < 2)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
	else
		write(1, &base[nb], 1);
}
