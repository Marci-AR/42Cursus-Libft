/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:16:38 by maareval          #+#    #+#             */
/*   Updated: 2022/05/15 09:31:03 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

/* ft_isapha check if the character is alphabetic */
int					ft_isalpha(int c);

/* ft_isdigit check if the character is a number */
int					ft_isdigit(int c);

/* ft_isalnum heck if the character is alphanumeric */
int					ft_isalnum(int c);

/* ft_isascii check if the character is axcii */
int					ft_isascii(int c);

/* ft_isprint check if the character is printable */
int					ft_isprint(int c);

/* ft_streln returns the lenth of the string */
size_t				ft_strlen(const char *str);

/* ft_memset copies the character c from an unsigned char to the first 
n characters of str */
void				*ft_memset(void *b, int c, size_t len);

/* ft_bzero zero a byte string */
void				ft_bzero(void *str, size_t n);

/* ft_memcpy copies the values of um bytes from the localtion pointed */
void				*ft_memcpy(void *dst, const void *src, size_t n);

/* ft_memmove */
void				*ft_memmove(void *dst, const void *src, size_t len);

/* ft_toupper convert a character from lowercase to uppercase */
int					ft_toupper(int c);

/* ft_tolower convert a character from uppercase to lowercase */
int					ft_tolower(int c);

/* ft_strchr locates first occurrence of c in the string pointed to by str */
char				*ft_strchr(const char *str, int c);

/* ft_strrchr is identical to ft_strchr, except it locates the last occurrence 
of c */
char				*ft_strrchr(const char *str, int c);

/* ft_strncmp */
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/* ft_strlcpy */
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

/* ft_strlcat */
size_t				ft_strlcat(char *dst, const char *src, size_t size);

/* ft_strnstr */
char				*ft_strnstr(const char *s1, const char *s2, size_t n);

/* ft_memchr searches for the firs occurrence of the character c 
(an unsigned char) in the first n bytes of the string pinted to, 
by the argument str */
void				*ft_memchr(const void *s, int c, size_t n);

/* ft_memcmp */
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/* ft_atoi */
int					ft_atoi(const char *str);

/* ft_calloc */
void				*ft_calloc(size_t n, size_t size);

/* ft_strdup.c */
char				*ft_strdup(const char *str);

/* ft_substr */
char				*ft_substr(char const *s, unsigned int start, size_t len);

/* ft_strjoin */
char				*ft_strjoin(char const *s1, char const *s2);

/* ft_strtrim */
char				*ft_strtrim(char const *s1, char const *set);

/* ft_split */
char				**ft_split(char const *s, char c);

/* ft_itoa */
char				*ft_itoa(int n);

/* ft_strmapi */
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/* ft_striteri */
void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/* ft_putchar_fd */
void				ft_putchar_fd(char c, int fd);

/* ft_putstr_fd */
void				ft_putstr_fd(char *s, int fd);

/* ft_putendl_fd */
void				ft_putendl_fd(char *s, int fd);

/* ft_putnbr_fd */
void				ft_putnbr_fd(int n, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* ft_lstnew */
t_list				*ft_lstnew(void *content);

/* ft_lstadd_front */
void				ft_lstadd_front(t_list **lst, t_list *new);

/* ft_lstsize */
int					ft_lstsize(t_list *lst);

/* ft_lstlast */
t_list				*ft_lstlast(t_list *lst);

/* ft_lsadd_back */
void				ft_lstadd_back(t_list **lst, t_list *new);

/* ft_lstdelone */
void				ft_lstdelone(t_list *lst, void (*del)(void *));

/* ft_lstclear */
void				ft_lstclear(t_list **lst, void (*del)(void *));

/* ft_lstiter */
void				ft_lstiter(t_list *lst, void (*f)(void *));

/*ft_lstmap */
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
