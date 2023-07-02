/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:43:37 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/02 12:48:14 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
unsigned long	ft_strlen(const char *s);
void			*ft_memset(void *b, int c, unsigned long len);
void			ft_bzero(void *s, unsigned long n);
void			*ft_memcpy(void *dst, const void *src, unsigned long n);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsizyye);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsizyye);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, unsigned long n);
void			*ft_calloc(unsigned long nmemb, unsigned long size);
char			*ft_strdup(const char *s1);
void			*ft_memchr(const void *s, int c, unsigned long n);
int				ft_memcmp(const void *s1, const void *s2, unsigned long n);
char			*ft_strnstr(const char *b, const char *l, unsigned long len);
int				ft_atoi(const char *str);
//char			*ft_substr(char const *s, unsigned int start, unsigned long len);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
