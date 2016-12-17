/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:29:13 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/12 15:29:14 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_map(int n, char *map)
{
	int		i;
	int		c;
	int 	j;

	i = (n * n) + n;
	printf("%d\n", i);
	if ((map = ft_strnew(i)) == 0)
		printf("SUQA\n");
	c = 0;
	j = 0;
	while (--i)
	{
		printf("i: %d\n", i);
		printf("j: %d\n", j);
		printf("c: %d\n", c);
		printf("n: %d\n", n);
		map[j] = '.';
		if (c == n)
		{

			map[j] = '\n';
			c = -1;
		}
		c++;
		j++;
	}
	printf("%s\n", map);
}