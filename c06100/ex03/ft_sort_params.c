/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:14:57 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/19 13:00:33 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(int a, char *argv[])
{
	int	b;

	b = 0;
	while (argv[a][b] == argv[a - 1][b] && argv[a][b] && argv[a - 1][b])
		b++;
	return (argv[a][b] - argv[a - 1][b]);
}

void	ft_putchar(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
}

int	main(int argc, char *argv[])
{
	int		a;
	int		b;
	char	*swap;
	int		c;

	a = 2;
	b = 0;
	swap = 0;
	c = 0;
	while (c < argc)
	{
		while (a < argc)
		{
			if (ft_strcmp(a, argv) < 0)
			{
				swap = argv[a];
				argv[a] = argv[a - 1];
				argv[a - 1] = swap;
			}
			a++;
		}
		a = 2;
		c++;
	}
	ft_putchar(argc, argv);
}
