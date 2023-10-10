/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdecleir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:03:18 by vdecleir          #+#    #+#             */
/*   Updated: 2023/08/20 20:32:25 by vdecleir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN(nbr)	(nbr % 2 == 0)
# define SUCCESS	0
# include <unistd.h>
# define TRUE		1
# define FALSE		2

typedef int			t_bool;

#endif
