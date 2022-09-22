/*
** EPITECH PROJECT, 2017
** search_bsq
** File description:
** ....
*/

#include "my.h"

void search_bsq(st_bsq *st)
{
	int i = 0;
	int j = 0;

	while (i < st->ligne + 1) {
		if (st->map[i][j] > st->search_bsq) {
			st->search_bsq = st->map[i][j];
			st->i = j;
			st->c = i;
		}
		j++;
		if (j > st->col) {
			i++;
			j = 0;
		}
	}
}
