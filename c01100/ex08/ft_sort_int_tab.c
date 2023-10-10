/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:28:16 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/24 18:54:21 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	swap;

	a = 1;
	b = 0;
	swap = 0;
	if (!tab)
		return ;
	while (b < size)
	{
		while (a < size)
		{
			if (tab[a - 1] > tab[a])
			{
				swap = tab[a];
				tab[a] = tab[a - 1];
				tab [a - 1] = swap;
			}
			a++;
		}
		a = 1;
		b++;
	}
}
