/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:39:07 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/09 15:39:09 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_data_base(char *src, char *add, int n)
{
	int 	i;
	char	pattern[27] = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = -1;
	add[20] = '*';
	while (add[++i] != '\0')
	{
		if (add[i] == '#')
			add[i] = pattern[n];
	}
	ft_strlcat(src, add, 546);
}
