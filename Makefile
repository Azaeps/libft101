# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: thperchi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/04 13:45:02 by thperchi     #+#   ##    ##    #+#        #
#    Updated: 2018/10/08 14:36:21 by thperchi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

SRCO = *.o

all : $(NAME)

$(NAME):
	gcc -I -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(SRCO)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all
