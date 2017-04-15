/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 20:39:44 by iburel            #+#    #+#             */
/*   Updated: 2017/04/05 17:21:35 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
 
int	get_next_line(int const fd, char **line)
{
    static char     *save[OPEN_MAX];
    t_gnl           gnl;
 
    if (!line || fd < 0 || !BUFF_SIZE || fd > OPEN_MAX)
        return (-1);
    gnl.ret = 1;
    if (!save[fd])
        save[fd] = ft_strnew(0);
    while (gnl.ret > -1)
    {
        if ((gnl.tmp = ft_strchr(save[fd], END_LINE)) ||
                ((gnl.tmp = ft_strchr(save[fd], END_STR)) && !gnl.ret))
        {
            *(gnl.tmp) = END_STR;
            *line = ft_strdup(save[fd]);
            ft_memmove(save[fd], gnl.tmp + 1, ft_strlen(gnl.tmp + 1) + 1);
            save[fd] = (!gnl.ret) ? NULL : save[fd];
            return (line[0][0] || (!line[0][0] && gnl.ret > 0));
        }
        if ((gnl.ret = read(fd, gnl.buff, BUFF_SIZE)) == -1)
            return (-1);
        gnl.buff[gnl.ret] = END_STR;
        save[fd] = ft_strjoin_free(save[fd], gnl.buff, 1);
    }
    return (-1);
}
