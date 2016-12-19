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

static void		ft_map(int n, int i, char *map)
{
	int		c;
	int 	j;
	
	c = 0;
	j = 0;
	while (i--)
	{
		map[j] = '.';
		if (c == n)
		{

			map[j] = '\n';
			c = -1;
		}
		c++;
		j++;
	}
}

void	ft_loveml(char **base, int n)
{
	char	*map;
	int		x[6];
	int		y[26];

	ft_intzero(y, 0, 26);
	ft_intzero(x, (n * n) + n, 6);
	x[1] = n;
	map = (char*)malloc(sizeof(char) * (x[0] + 1));
	map[x[0]] = '\0';
	ft_map(n, x[0], map);
	while(!x[5])
	{
		free(map);		
		n++;
		ft_intzero(y, 0, 26);
		ft_intzero(x, (n * n) + n, 6);
		x[1] = n;
		map = (char*)malloc(sizeof(char) * (x[0] + 1));
		map[x[0]] = '\0';
		ft_map(n, x[0], map);	
		ft_tsort(map, base, x, y);
	}
	ft_putstr(map);
}
