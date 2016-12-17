/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 17:43:38 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/05 21:33:49 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	*dbase;

	if (ac != 2)
		ft_putstr("usage: ./fillit sample.fillit\n");
	else
	{
		dbase = ft_strnew(546);
		ft_parse_sample(av[1], dbase);
		ft_loveml()
		printf ("%s\n", dbase);
	}
	return (0);
}
