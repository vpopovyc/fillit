/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 18:14:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/13 18:14:49 by vpopovyc         ###   ########.fr       */
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

void	ft_write(char *map, char *base, int n, int i)
{
	int		j;

	j = ft_dots(base);         //ft_ to skip trash in block
	n -= 3;
	while (base[j] != '\0')
	{
		if (base[j] == '\n')
		{	
			j++;
			if (base[j] == '*')    //End of block
				break;
			i += n;                       //To move on map bounded to block
		}
		if (map[i] == '.' && base[j] != '.')     //Write block pattern to map
			map[i] = base[j];
		i++;
		j++;
	}
}