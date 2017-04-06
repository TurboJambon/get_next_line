/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:56:23 by iburel            #+#    #+#             */
/*   Updated: 2017/03/16 15:45:15 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_filetostr(char *file)
{
	int		fd;
	int		ret;
	char	buf[65001];
	char	*str;

	if ((fd = open(file, O_RDONLY)) == -1)
		ft_afferror("error open in ft_filetostr");
	while ((ret = read(fd, buf, 65000)))
	{
		if (ret == -1)
			ft_afferror("error read in ft_filetostr");
		buf[ret] = '\0';
		str = ft_strjoin_free(str, buf, 'L');
	}
	if (close(fd) == -1)
		ft_afferror("error close in ft_filetostr");
	return (str);
}
