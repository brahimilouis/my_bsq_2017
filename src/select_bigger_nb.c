/*
** EPITECH PROJECT, 2017
** select_bigger_nb
** File description:
** ......
*/

#include "my.h"

void select_bigger_nb(st_bsq *st)
{
	int n = 1;
	int c = st->c;
	int i = st->i;

	if (st->map[c + 1][i] > st->map[c][i + 1])
		n = 2;
	if (st->map[c][i + 1] > st->map[c + 1][i + 1] && n == 2)
		st->small_nb = st->map[c + 1][i + 1];
	if (st->map[c][i + 1] <= st->map[c + 1][i + 1] && n == 2)
		st->small_nb = st->map[c][i + 1];
	if (st->map[c + 1][i] > st->map[c + 1][i + 1] && n == 1)
		st->small_nb = st->map[c + 1][i + 1];
	if (st->map[c + 1][i] <= st->map[c + 1][i + 1] && n == 1)
		st->small_nb = st->map[c + 1][i];
}
