/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshakula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 21:29:14 by hshakula          #+#    #+#             */
/*   Updated: 2016/12/20 19:21:48 by vpopovyc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_HEADER_H
# define __FT_HEADER_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int			ft_parse_sample(char *av, char *strg);
void		ft_loveml(char **base, int n);
void		ft_clear(char *map, char *base);
void		ft_write(char *map, char *base, int n, int i);
int			ft_check_place(char *map, char *base, int n, int i);
int			ft_tsort(char *map, char **base, int *x, int *y);
void		ft_bzero(void *s, size_t n);
void		ft_putchar(char c);
void		ft_putendl(const char *s);
void		ft_putstr(char const *s);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strdup(const char *s1);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strnew(size_t size);
char		**ft_strsplit(char const *s, char c);
size_t		ft_strlen(const char *s);
void		ft_intzero(int ar[], int f, size_t n);

#endif
