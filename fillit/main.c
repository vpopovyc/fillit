/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:43:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/20 19:19:33 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int ac, char **av)
{
	char	*dbase;
	char	**base;
	int		n;

	if (ac != 2)
		ft_putstr("usage: ./fillit sample.fillit\n");
	else
	{
		dbase = ft_strnew(546);
		if (!(n = ft_parse_sample(av[1], dbase)))
		{
			ft_putendl("error");
			return (0);
		}
		base = ft_strsplit(dbase, 42);
		free(dbase);
		ft_loveml(base, 1, n);
	}
	return (0);
}
