##
## EPITECH PROJECT, 2017
## make
## File description:
## jkijj
##

SRCS	=	src/bsq.c	\
		src/main.c	\
		src/my_str_to_word_array.c	\
		src/recup_map.c	\
		src/search_case.c	\
		src/init_var.c	\
		src/select_bigger_nb.c	\
		src/replace_map.c	\
		src/display_bsq.c	\
		src/my_int_to_word_array.c	\
		src/replace_bsq.c	\
		src/search_bsq.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/my_getnbr.c
OBJS	=	$(SRCS:.c=.o)

INCLUDE =	-I./includes/

CFLAGS	=	$(INCLUDE)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJS)
		gcc -o $(NAME) $(OBJS)
		rm $(OBJS)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
