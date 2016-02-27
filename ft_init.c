/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjarross <tjarross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 16:58:35 by tjarross          #+#    #+#             */
/*   Updated: 2016/02/27 17:50:09 by tjarross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

int		**init_tab(int x, int y)
{
	int i;
	int j;
	int	**tab;

	j = 0;
	tab = (int **)malloc(sizeof(tab) * y);
	while (j < y)
		tab[j++] = (int *)malloc(sizeof(int *) * x);
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
			tab[j][i++] = 0;
		j++;
	}
	return (tab);
}
