/*
** EPITECH PROJECT, 2017
** inclu
** File description:
** ......
*/

#ifndef MY__INCLUDES
#define MY__INCLUDES

#include <stdlib.h>
#include <stdio.h>
#include<unistd.h>
#include <fcntl.h>

typedef struct st_bsq_var {
	int **map;
	char **map_clean;
	int ligne;
	int col;
	int i;
	int c;
	int nb_case;
	int limite_lign;
	int v;
	int count_limite_col;
	int count_limite_lign;
	int small_nb;
	int search_bsq;
} st_bsq;

int verif_ligne(st_bsq *st);
int is_num(int);
void display_bsq(st_bsq *st);
void search_bsq(st_bsq *st);
int verif_start_fonction_int(char const *str, int i);
int **my_int_to_word_array(char const *str, int k, int j);
void replace_map(st_bsq *st);
void replace_bsq(st_bsq *st);
void select_bigger_nb(st_bsq *st);
void prepare_map(st_bsq *st);
void init_var(st_bsq *st, char *str);
void search_case(st_bsq *st);
void recup_map(char *str, st_bsq *st);
void bsq(char *str);
int counter_tab(char const *str);
int verif_space(char const *str, int i);
int verif_start_fonctin(char const *str, int i);
char **my_str_to_word_array(char const *str);
int next_malloc(char const *str, int i);
void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char const *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strnncpy(char *dest, char const *src, int n_2, int n);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int isnum(char const *str, int i);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_malloc_nbr_base(int nbr, int size_base);
void my_put_str_invers(char *str, int i);
int my_putnbr_base(int nbr, char const *base);
int isnoprint(char const *str, int i);
int my_show_word_array(char * const *tab);
int verif_space(char const *str, int i);
int verif_start_fonction(char const *str, int i);
int counter_tab(char const *str);
char my_letter_isalpha(char letter);
int my_printf(char *s, ...);
int search_pourcentage(char *str, int i);
void type_int(int nb, char *s, int i , int i_final);
char *base(int nbr, char const *base);
char **search_caract_attribut(char *s, int i, int i_final, char **tab);
void display_space_int(char **tab, int nb_space, char *nb);
int search_indicateur(char *str, int i);
int my_malloc_nbr_base(int nbr, int size_base);
void type_unsi(unsigned int arg, char *s, int i, int i_final);
void display_unsigned(char **tab, char *arg, int verif, char *str);
void type_char(char c, char *s, int i, int i_final);
void type_str(char *str, char *s, int i, int i_final);
void remplace_str(char *str);
void display_bad_parametre(char *s, int i, int i_final);
char *u(unsigned int nbr, char const *base);
void check_type_int(int c, char *s, int i, int i_final);

#endif /* MY__INCLUDES */
