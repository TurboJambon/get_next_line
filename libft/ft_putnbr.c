/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:20:12 by iburel            #+#    #+#             */
/*   Updated: 2016/11/03 10:20:13 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int		d;

	if (nb == -2147483648)
	{
		ft_putnbr(-214748364);
		ft_putchar('8');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	d = 1;
	while (d <= nb / 10)
		d *= 10;
	while (d > 0)
	{
		ft_putchar(nb / d + '0');
		nb %= d;
		d /= 10;
	}
}
