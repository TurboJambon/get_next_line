/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:40:11 by iburel            #+#    #+#             */
/*   Updated: 2017/03/16 15:47:37 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <wchar.h>
# include <limits.h>
# include <math.h>

typedef unsigned int			t_uint;
typedef unsigned short int		t_uhint;
typedef short int				t_hint;
typedef unsigned long int		t_ulint;
typedef long int				t_lint;
typedef unsigned long long int	t_ullint;
typedef long long int			t_llint;
typedef struct s_list			t_list;
typedef struct s_point			t_point;
typedef struct s_matrix			t_matrix;
typedef struct s_vec			t_vec;
typedef struct s_cplx			t_cplx;

struct		s_matrix
{
	t_uint	ligne;
	t_uint	colonne;
	float	**matrix;
};

struct		s_vec
{
	float	x;
	float	y;
	float	z;
};

struct		s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

struct		s_point
{
	float	x;
	float	y;
	float	z;
};

struct		s_cplx
{
	float	re;
	float	im;
};

t_cplx		ft_cplxdiv(t_cplx z1, t_cplx z2);
t_cplx		ft_cplxadd(t_cplx z1, t_cplx z2);
float		ft_cplxmod(t_cplx z);
t_cplx		ft_cplxmult(t_cplx z1, t_cplx z2);
t_cplx		ft_cplxnew(float re, float im);
t_cplx		ft_cplxsqrt(t_cplx z);
t_cplx		ft_cplxsub(t_cplx z1, t_cplx z2);
char		*ft_filetostr(char *file);
t_matrix	ft_matrixforrot(t_vec *u, float tetra);
t_matrix	ft_matrixmult(t_matrix *mat1, t_matrix *mat2);
void		ft_matrixaddfloat(t_matrix *mat, float x, float y, float z);
t_matrix	ft_matrixnew(unsigned int ligne, unsigned int colonne);
void		ft_matrix_free(t_matrix *matrix);
t_matrix	ft_matrixrot(t_matrix *mat, t_vec *u, float tetra);
t_vec		ft_vecunit(float x, float y, float z);
void		ft_putmatrix(t_matrix *mat);
void		*ft_realloc(void *data, size_t len, size_t size);
int			*ft_atoi_split(char *str, char c);
void		ft_afferror(char *str);
int			ft_nbbits(unsigned long long int nb);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *str, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *str);
size_t		ft_wstrlen(const wchar_t *str);
char		*ft_strdup(const char *str);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_isblank(int c);
int			ft_isspace(int c);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_ispunct(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_strsub(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strjoin_free(char *s1, char *s2, unsigned short int c);
char		*ft_strtrim(const char *s);
char		**ft_strsplit(const char *s, char c);
char		*ft_itoa(int n);
void		ft_putchar(wchar_t c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putnbrendl(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void		ft_lstaddlast(t_list **lst, t_list *add);

#endif
