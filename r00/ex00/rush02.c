/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:33:22 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/06 18:49:23 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_aba(int x, int y)
{
	int	i;

	i = 2;
	ft_putchar('A');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	print_b_b(int x, int y)
{
	int	i;

	i = 2;
	ft_putchar('B');
	while (i < x)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('B');
	}
	ft_putchar('\n');
}

void	print_cbc(int x, int y)
{	
	int	i;

	i = 2;
	ft_putchar('C');
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{	
	int	j;

	j = 2;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
	{
		write(1, "error \n", 7);
	}
	else
	{
		print_aba(x, y);
		if (y > 2)
		{
			while (j < y)
			{
				print_b_b(x, y);
				j++;
			}
		}
		if (y > 1)
		{
			print_cbc(x, y);
		}
	}
}
