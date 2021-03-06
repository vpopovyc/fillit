/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 21:20:31 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/19 21:21:00 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static void	ft_clear_y(int n, int size,int *y)
{
	n++;
	while (n < size)
	{
		y[n] = 0;
		n++;
	}
}

int			ft_tsort(char *map, char **base, int *x, int *y)
{
	ft_clear_y(x[3], x[4], y);
	if (!base[x[3]])
		x[5] = 1;
	if (x[5])
		return (1);
	x[2] = y[x[3]];
	if (x[2] == x[0])
		return (0);
	while (!ft_check_place(map, base[x[3]], x[1], x[2]))
		if (++x[2] > x[0])
			return (0);
	y[x[3]] = x[2];
	ft_write(map, base[x[3]], x[1], x[2]);
	++x[3];
	if (ft_tsort(map, base, x, y) == 0)
	{
		if (x[5] == 1)
			return (1);
		ft_clear(map, base[--x[3]]);
		y[x[3]]++;
		ft_tsort(map, base, x, y);
	}
	return (0);
}
