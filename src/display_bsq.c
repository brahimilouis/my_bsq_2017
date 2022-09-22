/*
** EPITECH PROJECT, 2017
** display_bsq
** File description:
** ....
*/

#include "my.h"

void display_bsq(st_bsq *st)
{
	char *str;

	str = malloc(sizeof(char) * ((st->col + 1) * (st->ligne + 2) + 1));
	for (int i = 0; i < st->ligne + 1; i++) {
		write(1, st->map_clean[i], st->col + 1);
		my_putchar('\n');
	}
}
