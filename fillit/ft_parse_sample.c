/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sample.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:11:23 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/05 21:54:37 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_parse_sample(char *av, char *strg)
{
	int		fd;
	int		ret;
	int		n;
	char	buf[21];

	n = 0;
	if ((fd = open(av, O_RDONLY)) == -1)
		return (ft_putstr("Failed to open\n"));
	else
	{
		while ((ret = read(fd, buf, 21)) && (++n))
		{
			if (n == 27)
				ft_putstr("Uberi ruki daun -_-\n");
			if (ft_parse_validate(buf) == 1)
				ft_data_base(strg, buf, n);
			else
				return (ft_putstr("Ti che pishesh', mudila?!\n"));
		}
		if (close(fd) == -1)
			return (ft_putstr("Failed to close\n"));
	}
}