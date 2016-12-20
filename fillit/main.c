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
	//	printf("%s\n", dbase);
		base = ft_strsplit(dbase, 42);
		free(dbase);
	//	printf("\nn = %d\n", n);
	//	printf("%s", base[n - 2]);
		// if (base[n - 1][20] == '\n')

		ft_loveml(base, 1);
	}
	return (0);
}
