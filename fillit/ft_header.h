/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h:                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 18:07:31 by vpopovyc          #+#    #+#             */
/*   Updated: 2016/12/05 21:39:47 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_HEADER_H
# define __FT_HEADER_H

# include "libft.h"
# include <fcntl.h>
# include <string.h>
int			ft_parse_sample(char *av, char *strg);
void		ft_loveml(char **base, int n);
void		ft_clear(char *map, char *base);
void		ft_write(char *map, char *base, int n, int i);
int			ft_check_place(char *map, char *base, int n, int i);
int			ft_tsort(char *map, char **base, int *x, int *y);
#endif
