/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/14 09:28:58 by wbeets            #+#    #+#             */
/*   Updated: 2013/12/15 19:53:15 by wbeets           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUFF_SIZE 242
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>
# include <string.h>
# define LEFT(I) ((i)<<1)
# define RIGHT(I) (((i)<<1)+1)
# define PARENT(I) ((i)>>1)

typedef struct	s_keyandval
{
	char		*key;
	char		*val;
}				t_key_and_val;

typedef struct		s_heap
{
	int				size;
	t_key_and_val	*tab;
}					t_heap;

t_key_and_val	*ft_new_tab(int size);
t_key_and_val	*ft_bigger_tab(t_key_and_val *tab, int new_size);
t_key_and_val	*ft_copy_tab(t_key_and_val *tab, t_key_and_val *bigtab, int size);
void			buildheap(t_heap *A);
void			swap(t_key_and_val *a, t_key_and_val *b);
char			*extract_max(t_heap *A);
void			make_heap(t_heap *A, int i);
int				get_next_line(int const fd, char **line);
char			*biggerbuf(int const fd, char *buf, int *ret);
char			*ft_strnew(size_t size);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
void			ft_strdel(char **as);
char			*ft_strjoin(char const *s1, char const *s2);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memalloc(size_t size);
size_t			ft_strlen(const char *s1);
int				ft_strcmp(const char *s1, const char *s2);
char			*ft_strcat(char *s1, const char *s2);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			ft_bzero(void *b, size_t len);
char			*ft_strcpy(char *dest, const char *src);
void			ft_putstr(char const *s);
void			ft_putchar(char c);
int				hotwhile(int *j, int *k, t_key_and_val **tab);
int				hotcut(int *j, int *k, char **line, t_key_and_val **tab);
void			ft_search(t_key_and_val **tab, char *line, int max);
void			ft_freetab(t_key_and_val **tab, int size);
char			*ft_make_buf(int const fd, char *buf, long *ret);

#endif /* HEADER_H */
