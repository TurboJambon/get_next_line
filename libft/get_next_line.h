/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 20:54:43 by iburel            #+#    #+#             */
/*   Updated: 2017/03/16 15:51:51 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE 3

typedef struct s_gnl	t_gnl;

struct	s_gnl
{
	char	*tmp;
	char	buf[BUFF_SIZE];
};

int		get_next_line(int fd, char **line);

#endif
