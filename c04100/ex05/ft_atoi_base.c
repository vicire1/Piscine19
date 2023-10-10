/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 13:49:19 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/20 16:04:04 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[len] == '+' || base[len] == '-' || base[len] == 32)
			return (0);
		len++;
	}
	return (len);
}

int	check_if_base(int a, int len, char *str, char *base)
{
	int	nbr;
	int	b;

	nbr = 0;
	b = 0;
	while (base[b])
	{
		if (str[a] == base[b])
		{
			nbr = (nbr * len) + (b);
			a++;
			b = -1;
		}
		b++;
	}
	return (nbr);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;
	int	signe;
	int	nbr;
	int	len;

	a = 0;
	signe = 1;
	nbr = 0;
	len = verif_base(base);
	if (len < 2)
		return (0);
	if (!str)
		return (0);
	while (str[a] == 32 || (str[a] > 8 && str[a] < 14))
		a++;
	while (str[a] == 43 || str[a] == 45)
	{
		if (str[a] == 45)
			signe = -signe;
		a++;
	}
	nbr = check_if_base(a, len, str, base);
	nbr = nbr * signe;
	return (nbr);
}
