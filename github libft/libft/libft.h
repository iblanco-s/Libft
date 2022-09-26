/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:33:29 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/26 18:32:23 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_toupper(int ch);
int			ft_tolower(int ch);
int			ft_strlen(const char *a);
size_t		ft_strlcpy(char *dest, const char *src, size_t len);
int			ft_isprint(int a);
int			ft_isdigit(int a);
int			ft_isascii(int a);
int			ft_isalpha(int a);
int			ft_isalnum(char a);
int			ft_atoi(const char *str);
size_t		ft_strlcat(char *dest, const char *src, size_t len);
int			ft_strncmp(const char *str1, const char *str2, size_t n);
char		*ft_strnstr(const char	*str1, const char *str2, size_t len);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif