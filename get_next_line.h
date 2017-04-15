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
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# define BUFF_SIZE 3
# define END_LINE '\n'
# define END_STR '\0'
 
int                 get_next_line(int const fd, char **line);
 
typedef struct      s_gnl
{
    char            *tmp;
    char            buff[BUFF_SIZE + 1];
    int             ret;
}                   t_gnl;
 
#endif
