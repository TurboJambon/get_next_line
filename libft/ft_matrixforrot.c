/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixforrot.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:58:40 by iburel            #+#    #+#             */
/*   Updated: 2017/03/13 20:58:42 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_matrix	ft_matrixforrot(t_vec *u, float teta)
{
	t_matrix	ret;
	float		c;
	float		s;

	ret = ft_matrixnew(4, 4);
	c = cos(teta);
	s = sin(teta);
	ret.matrix[0][0] = u->x * u->x * (1 - c) + c;
	ret.matrix[0][1] = u->x * u->y * (1 - c) - u->z * s;
	ret.matrix[0][2] = u->x * u->z * (1 - c) + u->y * s;
	ret.matrix[0][3] = 0;
	ret.matrix[1][0] = u->x * u->y * (1 - c) + u->z * s;
	ret.matrix[1][1] = u->y * u->y * (1 - c) + c;
	ret.matrix[1][2] = u->y * u->z * (1 - c) - u->x * s;
	ret.matrix[1][3] = 0;
	ret.matrix[2][0] = u->x * u->z * (1 - c) - u->y * s;
	ret.matrix[2][1] = u->y * u->z * (1 - c) + u->x * s;
	ret.matrix[2][2] = u->z * u->z * (1 - c) + c;
	ret.matrix[2][3] = 0;
	ret.matrix[3][0] = 0;
	ret.matrix[3][1] = 0;
	ret.matrix[3][2] = 0;
	ret.matrix[3][3] = 1;
	return (ret);
}
