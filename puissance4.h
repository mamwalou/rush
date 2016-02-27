/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puissance4.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjarross <tjarross@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 17:33:42 by tjarross          #+#    #+#             */
/*   Updated: 2016/02/27 18:01:15 by tjarross         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUISSANCE4_H
# define PUISSANCE4_H

# include <ncurses.h>
# include <time.h>
# include <stdlib.h>
# include "./libft/includes/libft.h"

# define MAX_LEN 50


typedef struct                  s_situation
{
    int         draw;
    int         win;
    int         lose;
    int         player;
}                               t_situation;

int     count_nb(int nb);
int		**init_tab(int x, int y);
void	ft_print_tab(int **tab, int x, int y);
void	game(int **tab, int x, int y);

#endif
