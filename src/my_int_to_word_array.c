/*
** EPITECH PROJECT, 2017
** my_int_to_show_array
** File description:
** ...
*/

#include "my.h"

int verif_start_fonction_int(char const *str, int i)
{
	while (str[i] != '\n')
		i++;
	i++;
	return (i);
}

int **my_int_to_word_array(char const *str, int k, int j)
{
	int i = 0;
	int **tab;

	tab = malloc(sizeof(int *) * (counter_tab(str) + 1));
	i = verif_start_fonction_int(str, i);
	tab[0] = malloc(sizeof(int) * (next_malloc(str, i)));
	while (str[i] != '\0') {
		if (str[i] == '.')
			tab[j][k] = 1;
		else
			tab[j][k] = 0;
		i++;
		if (str[i] == '\n') {
			i = verif_space(str, i);
			j++;
			k = -1;
			tab[j] = malloc(sizeof(int) * (next_malloc(str, i)));
		}
		k++;
	}
	return (tab);
}
