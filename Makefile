##
## Makefile for Makefile in /home/renard_e/Makefile_lib
## 
## Made by gregoire renard
## Login   <renard_e@epitech.net>
## 
## Started on  Mon Nov  9 11:43:47 2015 gregoire renard
## Last update Sun May 29 13:41:44 2016 gregoire renard
##

CC	= gcc -Iinclude/

RM	= rm -fr

ECHO	= echo

SRCS	= ia.c \
	  ia_part_one.c \
	  src_rene/turn.c \
	  src_rene/basics2.c \
	  src_rene/greps.c \
	  src_rene/greps2.c \
	  src_rene/get_info_lidar.c \
	  src_rene/gestion_float.c \
	  src_rene/range_turn.c \
	  src_rene/stop.c \
	  src_rene/brake.c \
	  src_nez/speed_fct.c \

OBJS 	= $(SRCS:.c=.o)

NAME	= n4s_package/ia

NAMEBIS	= ia

CFLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	 make -C lib/my/
	 $(CC) -o $(NAME) $(OBJS) -L lib/ -lmy -lm
	 $(CC) -o $(NAMEBIS) $(OBJS) -L lib/ -lmy -lm
	@$(ECHO) -e "\033[31;1m"
	@$(ECHO) "      ::::    ::: :::::::::: :::::::::: :::::::::             :::      :::::::::::  ::::::::::: :::::::::: :::    :::"
	@$(ECHO) "     :+:+:   :+: :+:        :+:        :+:    :+:           :+:        ::               :+:     :+:        :+:   :+:"
	@$(ECHO) "    :+:+:+  +:+ +:+        +:+        +:+    +:+          +:+ +:+      ::              +:+     +:+        +:+  +:+"
	@$(ECHO) "   +#+ +:+ +#+ +#++:++#   +#++:++#   +#+    +:+         +#+  +:+       ::;:;:;:;:;    +#+     +#++:++#   +#++:++"
	@$(ECHO) "  +#+  +#+#+# +#+        +#+        +#+    +#+        +#+#+#+#+#+               ::   +#+     +#+        +#+  +#+"
	@$(ECHO) " #+#   #+#+# #+#        #+#        #+#    #+#              #+#                  ::  #+#     #+#        #+#   #+#"
	@$(ECHO) "###    #### ########## ########## #########               ###          ::::::::::: ###     ########## ###    ###"
	@$(ECHO) -e "\033[0m"

clean:
	$(RM) $(OBJS)
	make clean -C lib/my/

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAMEBIS)
	make fclean -C lib/my/

re: fclean all

.PHONY: all re clean fclean
