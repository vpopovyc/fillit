/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_validate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 19:18:26 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/06 19:18:28 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include <stdio.h>


int		ft_parse_validate(char *buf)
{
	int		av[4];
	
	ft_intzero(av, -1, 4);
	while (buf[++av[0]])
	{	
		if (buf[av[0]] == '.')
			av[1]++;
		if (buf[av[0]] == '#')
			av[2]++;
		if ((buf[av[0]] == '\n') && (av[1] + av[2] + av[3] == av[0]))
			av[3]++;
	}
	if (av[1] == 12 && av[2] == 4 && av[3] == 5)
		return (ft_check_chain(buf));
	return (0);
}