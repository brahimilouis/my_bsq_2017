/*
** EPITECH PROJECT, 2017
** init_var
** File description:
** init_var
*/

#include "my.h"

void init_var(st_bsq *st, char *str)
{
	st->search_bsq = 0;
	recup_map(str, st);
	st->col = -1;
	for (int k = 0; st->map_clean[0][k] != '\0'; k++)
		st->col++;
	st->nb_case = (st->ligne) * (st->col);
	st->limite_lign = st->col - 1;
	st->i = st->col;
	st->c = st->ligne - 1;
	st->v = 0;
	st->count_limite_col = st->ligne - 1;
	st->count_limite_lign = st->col - 3;
}
