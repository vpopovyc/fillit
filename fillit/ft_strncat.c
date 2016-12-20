/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 20:32:20 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/02 14:45:17 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char *beer;

	beer = s1;
	beer = beer + ft_strlen(s1);
	while ((n--) && (*s2))
	{
		*beer = *s2;
		beer++;
		s2++;
	}
	*beer = '\0';
	return (s1);
}
