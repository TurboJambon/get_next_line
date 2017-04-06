/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 20:54:43 by iburel            #+#    #+#             */
/*   Updated: 2017/04/05 18:14:58 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE 8

typedef struct s_gnl	t_gnl;

struct	s_gnl
{
	char	*tmp;
	char	buf[BUFF_SIZE + 1];
};

int		get_next_line(int fd, char **line);

#endif
