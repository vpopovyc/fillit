/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dsting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 16:52:48 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/10 16:52:50 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_dbase(char *s1, char *s2, int n)
{
	char	*f;
	int 	i;

	i = 22 * n;
	if (n == 1)
	{
		f = ft_strnew(i);
		f = ft_strcpy(f, s2);
		return (f);
	}
	f = ft_strnew(i);
	f = ft_strcpy(f, s1);
	f = ft_strcat(f, s2);
	return (f);
}