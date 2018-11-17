/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achavez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:43:03 by achavez           #+#    #+#             */
/*   Updated: 2018/11/10 13:16:21 by achavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void				*ft_memset(void *ptr, int x, size_t n);
void				ft_bzero(void *string, size_t count);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t len);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strndup(const char *str, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t len);
char				*ft_strcat(char *dest, const char *src);
size_t				ft_strnlen(const char *str, size_t maxlen);
char				*ft_strncat(char *dest, const char *src, size_t n);
size_t				ft_strlcat(char *dest, const char *src, size_t n);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strstr(const char *haystack, const char *needle);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
char				*ft_strnstr(const char *s, const char *n, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_atoi(const char *str);
int					ft_isalpha(int arg);
int					ft_isdigit(int arg);
int					ft_isalnum(int arg);
int					ft_isascii(int arg);
int					ft_isprint(int arg);
int					ft_upperchar(char *character);
char				ft_iterupchar(unsigned int index, char *character);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *str);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void(*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strnequ(char const *str1, const char *str2, size_t n);
int					ft_strequ(char const *str1, char const *str2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *str1, char const *str2);
char				*ft_strtrim(char const *string);
char				**ft_strsplit(char const *string, char delimiter);
void				ft_putchar(char c);
void				ft_putstr(char const *string);
void				ft_putendl(char const *string);
void				ft_putnbr(int n);
void				ft_putchar_fd(char character, int file_descriptor);
void				ft_putstr_fd(char const *string, int file_descriptor);
void				ft_putendl_fd(char const *string, int file_descriptor);
void				ft_putnbr_fd(int number, int file_descriptor);
char				*ft_itoa(int number);
void				ft_function_test1();
void				ft_function_test2();

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alist, void (*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
