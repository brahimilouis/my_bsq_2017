/*
** EPITECH PROJECT, 2017
** search_case.c
** File description:
** ....
*/

#include "my.h"

void search_case(st_bsq *st)
{
	if (st->i == 0) {
		st->i = st->col;
		st->c--;
	}
	st->i--;
}
