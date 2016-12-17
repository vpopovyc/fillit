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

void	ft_loveml(int n, char *dbase)
{
	char	*map;
	int 	i;

	i = (n * n) + n;
	map = (char*)malloc(sizeof(char) * (i));
	map[i] = '\0';
	ft_map(n, i, map);
	while(n < 10)
	{	
		free(map);		
		n++;
		i = (n * n) + n;
		map = (char*)malloc(sizeof(char) * (i));
		map[i] = '\0';
		ft_map(n, i, map);
	}
}
