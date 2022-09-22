/*
** EPITECH PROJECT, 2017
** recup_map
** File description:
** recup
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>

void recup_map(char *str, st_bsq *st)
{
	char *b;
	int file;
	int k = 0;
	int j = 0;
	struct stat sb;

	stat(str, &sb);
	b = malloc(sizeof(char) * (sb.st_size));
	file = open(str, O_RDONLY);
	read(file, b, sb.st_size);
	st->ligne = my_getnbr(b) - 1;
	st->map_clean = my_str_to_word_array(b);
	st->map = my_int_to_word_array(b, k, j);
}
