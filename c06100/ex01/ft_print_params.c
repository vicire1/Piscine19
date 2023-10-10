/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 10:54:38 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/14 12:38:44 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	a;
	int	i;

	a = 1;
	i = 0;
	if (argc == 1)
		return (0);
	while (argv[a][i] && a < argc)
	{
		while (argv[a][i])
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		write(1, "\n", 1);
		if (a == argc - 1)
			return (0);
		i = 0;
		a++;
	}
	return (0);
}
