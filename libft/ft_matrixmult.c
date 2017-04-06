/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixmult.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/13 20:56:57 by iburel            #+#    #+#             */
/*   Updated: 2017/03/13 20:59:06 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static float	ft_case(t_matrix *mat1, t_matrix *mat2, t_uint i, t_uint j)
{
	t_uint	k;
	float	ret;

	ret = 0;
	k = 0;
	while (k < mat1->colonne)
	{
		ret += mat1->matrix[i][k] * mat2->matrix[k][j];
		k++;
	}
	return (ret);
}

t_matrix		ft_matrixmult(t_matrix *mat1, t_matrix *mat2)
{
	t_matrix	ret;
	t_uint		i;
	t_uint		j;

	if (mat1->colonne != mat2->ligne)
		ft_afferror("operation impossible in ft_matrixmult");
	ret.ligne = mat1->ligne;
	ret.colonne = mat2->colonne;
	if (!(ret.matrix = (float **)malloc(sizeof(float *) * (ret.ligne))))
		ft_afferror("error malloc in ft_matrixmult");
	i = 0;
	while (i < ret.ligne)
	{
		if (!(ret.matrix[i] = (float *)malloc(sizeof(float) * (ret.colonne))))
			ft_afferror("error malloc in ft_matrixmult");
		j = 0;
		while (j < ret.colonne)
		{
			ret.matrix[i][j] = ft_case(mat1, mat2, i, j);
			j++;
		}
		i++;
	}
	return (ret);
}
