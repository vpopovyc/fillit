/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshakula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 21:29:14 by hshakula          #+#    #+#             */
/*   Updated: 2016/12/19 21:29:36 by hshakula         ###   ########.fr       */
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
