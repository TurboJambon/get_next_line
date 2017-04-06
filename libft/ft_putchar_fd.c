/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:19:39 by iburel            #+#    #+#             */
/*   Updated: 2017/01/20 18:17:43 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned int	size;
	unsigned int	octet;

	size = ft_nbbits(c);
	if (size <= 7)
		write(fd, &c, 1);
	else if (size <= 11)
	{
		octet = (((c & 0x3f) << 8) | (c >> 6)) | 0x80c0;
		write(fd, &octet, 2);
	}
	else if (size <= 16)
	{
		octet = (((c & 0x3f) << 16) | (((c >> 6) & 0x3f) << 8)
				| (c >> 12)) | 0x8080e0;
		write(fd, &octet, 3);
	}
	else if (size <= 21)
	{
		octet = (((((c & 0x3f) << 24) | (((c >> 6) & 0x3f) << 16))
				| (((c >> 12) & 0x3f) << 8)) | (c >> 18)) | 0x808080f0;
		write(fd, &octet, 4);
	}
}
