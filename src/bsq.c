/*
** EPITECH PROJECT, 2017
** bsq.c
** File description:
** ofdzkdok
*/

#include "my.h"

void bsq(char *str)
{
	st_bsq st;
	int verif = 0;

	init_var(&st, str);
	if (st.col == 0 || st.ligne == 0)
		verif = 1;
	while ((st.c != 0 || st.i != 0) && verif == 0) {
		search_case(&st);
		select_bigger_nb(&st);
		replace_map(&st);
	}
	if (st.col == 0 && st.ligne == 0 && st.map[0][0] == 'o')
		my_putstr("o\n");
	else if (st.ligne == 0 && verif_ligne(&st) == 1) {
		my_putstr(st.map_clean[0]);
		my_putchar('\n');
	} else {
		search_bsq(&st);
		replace_bsq(&st);
		display_bsq(&st);
	}
}

int verif_ligne(st_bsq *st)
{
	int i = 0;

	while (st->map_clean[0][i] != '\0') {
		if (st->map_clean[0][i] == '.')
			return (0);
		i++;
	}
	return (1);
}
