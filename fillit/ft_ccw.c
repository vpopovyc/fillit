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

void	ft_clear(char *map, char *base)
{
	char	c;
	int		i;

	i = 0;
	while ((base[i] == '.') || (base[i] == '\n'))
		i++;
	c = base[i];
	i = -1;
	while (map[++i] != '\0')
	{
		if (map[i] == c)
			map[i] = '.';
	}
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
			if (base[j] == '\0')
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
			if (base[j] == '\0')
				break ;
			i += n;                       //To move on map bounded to block
		}
		if (map[i] == '.' && base[j] != '.')     //Write block pattern to map
			map[i] = base[j];
		i++;
		j++;
	}
}