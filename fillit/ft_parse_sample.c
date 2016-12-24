/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_sample.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:11:23 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/20 18:52:20 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char g_pattern[27] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

static void		ft_data_base(char *src, char *add, int n)
{
	int		i;

	i = -1;
	add[20] = '*';
	while (add[++i] != '\0')
	{
		if (add[i] == '#')
			add[i] = g_pattern[n];
	}
	ft_strlcat(src, add, 546);
}

static int		ft_check_chain(char *buf)
{
	int		j;
	int		i;

	j = 0;
	i = -1;
	while (buf[++i])
	{
		if (buf[i] == '#')
		{
			if (buf[i + 1] == '#')
				j++;
			if (buf[i + 5] == '#')
				j++;
		}
	}
	if (j == 3 || j == 4)
		return (1);
	return (0);
}

static int		ft_parse_validate(char *buf, int ccki)
{
	int		av[4];

	ft_intzero(av, -1, 4);
	while (buf[++av[0]])
	{
		if (buf[av[0]] == '.')
			av[1]++;
		if (buf[av[0]] == '#')
			av[2]++;
		if ((buf[av[0]] == '\n') && (av[1] + av[2] + av[3] == av[0]) && av[0])
			av[3]++;
	}
	if (av[1] == 12 && av[2] == 4 && av[3] == (ccki == 20 ? 4 : 5))
		return (ft_check_chain(buf));
	return (0);
}

int				ft_parse_sample(char *av, char *strg)
{
	int		fd;
	int		ccki;
	int		n;
	int		j;
	char	buf[21];

	n = 0;
	if ((fd = open(av, O_RDONLY)) == -1)
		return (0);
	else
	{
		while ((ccki = read(fd, buf, 21)) && (++n))
		{
			j = ccki;
			if (n == 27)
				return (0);
			if (ft_parse_validate(buf, ccki) == 1)
				ft_data_base(strg, buf, n);
			else
				return (0);
		}
		if (close(fd) == -1 || j != 20)
			return (0);
	}
	return (n);
}
