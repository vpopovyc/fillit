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
# include <stdio.h>
# include <string.h>
void	ft_parse_sample(char *av, char *strg);
int		ft_parse_validate(char *buf);
int		ft_check_chain(char *buf);
void	ft_data_base(char *src, char *add, int n);
void	ft_map(int n, int i, char *map);
void	ft_loveml(int n, char *dbase);
void	ft_write(char *map, char *base, int n, int i);
int		ft_check_place(char *map, char *base, int n, int i);
#endif
