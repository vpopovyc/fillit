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

void	ft_parse_sample(char *av)
{
	int		fd;
	int		ret;
	char	buf[21];

	if ((fd = open(av, O_RDONLY)) == -1)
		ft_putstr("Failed to open\n");
	else
	{
		while ((ret = read(fd, buf, 21)))
		{
			if (ft_parse_validate(buf))
				ft_putstr(buf);
		}
		if (close(fd) == -1)
			ft_putstr("Failed to close\n");
	}
}
