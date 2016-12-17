/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loveml.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 15:55:04 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/13 15:55:18 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_loveml(int n)
{
	char	*map;
	int 	i;
	int		tab[5];

	i = (n * n) + n;
	map = (char*)malloc(sizeof(char) * (i + 1));
	map[i] = '\0';
	tab[0] = i; // i_max
	tab[1] = n; // size square
	tab[2] = -1; // start point
	tab[3] = 0; // number of tetriminus
	tab[4] = 0; // prev number of tetrim
	ft_map(n, i, map);
	//printf("%s\n", map);
	if (!ft_tsort(map, base, tab))
		ft_loveml(n + 1); // to do
	while(n < 10)
	{	
		free(map);		
		n++;
		i = (n * n) + n;
		map = (char*)malloc(sizeof(char) * (i + 1));
		map[i] = '\0';
		ft_map(n, i, map);
	//	printf("%s\n", map);
	}
}
