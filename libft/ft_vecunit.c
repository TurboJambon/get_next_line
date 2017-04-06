/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vecunit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:59:19 by iburel            #+#    #+#             */
/*   Updated: 2017/03/13 20:59:20 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec	ft_vecunit(float x, float y, float z)
{
	float	tmp;
	t_vec	u;

	tmp = sqrt(1 / (x * x + y * y + z * z));
	u.x = x * tmp;
	u.y = y * tmp;
	u.z = z * tmp;
	return (u);
}
