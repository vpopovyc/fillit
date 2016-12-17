/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 11:44:29 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/15 11:44:30 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

static int		ft_dots(char *base)
{
	int		i;
	
	i = 0;
	while (base[i] == '.' || base[i] == '\n')
		i++;
	return (i);
}

int		ft_check_place(char *map, char *base, int n, int i)
{
	int		j;
	int		c;

	j = ft_dots(base);
	n -= 3;
	c = 0;
	while (base[j] != '\0')
	{
		if (base[j] == '\n')
		{
			j++;
			if (base[j] == '*')
			{
				if (c == 4)               //If all blocks could be written, return 1
					return (1);
				return (0);
			}
			i += n;
		}
		if (map[i] == '.' && base[j] != '.')
			++c;                              //Counts blocks that can be writen
		i++;
		j++;
	}
	return (0);
}
