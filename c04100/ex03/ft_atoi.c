/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:18:22 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/12 16:48:24 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	a;
	int	signe;
	int	nbr;

	a = 0;
	signe = 1;
	nbr = 0;
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
	while (str[a] > 47 && str[a] < 58)
	{
		nbr = nbr * 10 + (str[a] - 48);
		a++;
	}
	nbr = nbr * signe;
	return (nbr);
}
