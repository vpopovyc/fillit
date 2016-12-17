/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_answ.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:10:58 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/12 17:11:00 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_answ(char *bs)
{
	int		i;
	char	*map;

	i = 1;
	while (++i)
	{
		ft_map(i, map);
		if (ft_sort(bs, map) == 1)
			ft_putstr(map);
		ft_strdel(&map);
	}
}