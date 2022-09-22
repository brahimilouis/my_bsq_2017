/*
** EPITECH PROJECT, 2017
** remplace_map.c
** File description:
** .....
*/

#include "my.h"

void replace_map(st_bsq *st)
{
	if (st->map[st->c][st->i] != 0)
		st->map[st->c][st->i] = st->small_nb + 1;
}
