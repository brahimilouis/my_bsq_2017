/*
** EPITECH PROJECT, 2017
** replace_bsq
** File description:
** ....
*/

#include "my.h"

void replace_bsq(st_bsq *st)
{
	int i = st->c;
	int k = i;
	int j = st->i;
	int nb = st->map[k][j];
	int a = 0;
	int b = 0;

	while (b < nb) {
		st->map_clean[i][j] = 'x';
		i++;
		a++;
		if (nb == a) {
			b++;
			i = k;
			a = 0;
			j++;
		}
	}
}
