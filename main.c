/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjarross <tjarross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 16:50:41 by tjarross          #+#    #+#             */
/*   Updated: 2016/02/27 17:59:55 by tjarross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puissance4.h"

static int ft_check(int n, int pos)
{
	if (pos == 1)
		if (n < MAX_LEN && n > 7)
			return (0);
	if (pos == 2)
		if (n < MAX_LEN && n > 6)
				return (0);
	return (1);
}

static void 	ft_puterror(const char *str, int code)
{
	if (code == 0)
	{
		ft_putstr(str);
		exit (1);
	}
}
int		main(int ac, char **av)
{
	int x;
	int y;
	int	**tab;

	if (ac != 3)
		ft_puterror("need more arg", 0);
	if (ft_check(x = ft_atoi(av[1]), 1))
		ft_puterror("x not value", 0);
	if (ft_check(y = ft_atoi(av[2]), 2))
		ft_puterror("y not value", 0);
	tab = init_tab(x, y);
	ft_print_tab(tab, x, y);
	srand(time(NULL));
	game(tab, x, y);
	return (0);
}
