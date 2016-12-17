/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_re_alloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 19:25:45 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/12 19:25:47 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_re_alloc(char *arr_in, int len)
{
	char	*arr_new;

	arr_new = (char*)malloc(sizeof(char) * len);
	free(arr_in);
	return (arr_new);
}
