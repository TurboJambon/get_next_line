/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cplxadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 18:08:48 by iburel            #+#    #+#             */
/*   Updated: 2017/03/13 20:51:48 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_cplx	ft_cplxadd(t_cplx z1, t_cplx z2)
{
	t_cplx	ret;

	ret.re = z1.re + z2.re;
	ret.im = z1.im + z2.im;
	return (ret);
}