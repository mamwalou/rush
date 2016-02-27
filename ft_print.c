/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjarross <tjarross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 17:39:49 by tjarross          #+#    #+#             */
/*   Updated: 2016/02/27 18:03:38 by tjarross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

void	ft_print_tab(int **tab, int x, int y)
{
	int i;
	int j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
			ft_putnbr(tab[j][i++]);
		ft_putchar('\n');
		j++;
	}
}
