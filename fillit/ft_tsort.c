/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 16:51:22 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/13 16:51:24 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		ft_tsort(char *map, char **base, int *tab)
{
	if (!(base[tab[3]]))
		printmap();
	if (tab[4] == tab[3])
		if (tab[2]++ == tab[0]) // i++
			return (0);
	else
		tab[2] = 0;
	while  (!ft_check_place(map, base[tab[3]], tab))
	{
		if (tab[2] == tab[0]) // i == i_max
			return (0);
		tab[2]++; // i++
	}
	tab[4] = tab[3];
	ft_write(map, base[tab[3]], tab);
	if (!ft_tsort(map, base[++tab[3]], tab))
	{
		ft_clear(map, base[--tab[3]], tab);
		ft_tsort(map, base[tab[3]], tab);
	}

}
