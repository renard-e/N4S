##
## Makefile for library in /home/renard_e/Makefile/
## 
## Made by gregoire renard
## Login   <renard_e@epitech.net>
## 
## Started on  Mon Oct 12 09:42:55 2015 gregoire renard
## Last update Tue May 10 16:38:01 2016 rodrigue rene
##

NAME	= libmy.a

SRCS	= my_putchar.c \
	  my_putstr.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_revstr.c \
	  my_strcat.c \
	  my_strcpy.c \
	  my_strlen.c \
	  my_strncpy.c \
	  my_strstr.c \
	  my_swap.c \
	  my_getnbr.c \
	  my_puterr.c \
	  my_sort_int_tab.c \
	  my_power_rec.c \
	  my_square_root.c \
	  my_is_prime.c \
	  my_strcmp.c \
	  my_strupcase.c \
	  my_strlowcase.c \
	  my_strcapitalize.c \
	  my_str_isalpha.c \
	  my_str_isnum.c \
	  my_str_islower.c \
	  my_str_isupper.c \
	  my_str_isprintable.c \
	  to_word_tabb_n4s.c \
	  get_next_line.c \
	  my_strdup.c \
	  convert_in_char.c \
	  my_atof.c \
	  my_tr.c \
	  list_fct.c \
	  list_fct2.c \
	  my_str_to_word_tab.c \
	  aff_tab.c \

OBJS	= $(SRCS:.c=.o)

CFLAGS	= -W -Werror -Wall -Wextra

CC	= gcc -I../../include/

RM	= rm -f

all:	$(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp -r libmy.a ../

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all re clean fclean

