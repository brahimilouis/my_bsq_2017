/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** ....
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>

int main(int ac, char **av)
{
	int file;
	char *b;
	int len;
	int i = 0;
	struct stat sb;

	if (ac != 2)
		return (84);
	if (-1 == (file = open(av[1], O_RDONLY)))
		return (84);
	bsq(av[1]);
	return (0);
}
