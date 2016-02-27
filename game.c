/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjarross <tjarross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 17:58:30 by tjarross          #+#    #+#             */
/*   Updated: 2016/02/27 18:04:41 by tjarross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"
#include <stdio.h>

static void 	put_in_tab(int to_put, int **tab, int x)
{
	int i;

	i = 0;
	while (tab[i][to_put] == 0 && i++ < x - 1)
		;
	tab[i - 1][to_put] = 1;
}
static int		**ft_joueur(int **tab, int x ,t_situation *set)
{
	char	data[x];
	int		error;

	ft_putstr("choisir la colonne : ");
	while (set->player == 1)
	{
		if ((error = read(1, data, count_nb(x))) < 0)
			perror (data);
		data[x] = '\0';
		if ()
		set->player = 0;
	}
	return (tab);
}

void	game(int **tab, int x, int y)
{
	t_situation set;

	set.player = rand() % 2 + 1;
	while (set.win != 1 || set.draw != 1 || set.lose != 1)
	{
		if (set.player == 1)
		{
			ft_putendl("Le joueur commence : ");
			tab = ft_joueur(tab, x, &set);
		}
		ft_print_tab(tab, x, y);
	}
}
