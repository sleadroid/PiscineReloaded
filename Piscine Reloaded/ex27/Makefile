# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkivilah <nkivilah@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/30 11:01:50 by niko              #+#    #+#              #
#    Updated: 2021/10/30 22:37:59 by nkivilah         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
SOURCES = main.c
DEST = ft_display_file

all: compile

compile:
	gcc $(CFLAGS) -o $(DEST) $(SOURCES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(DEST)
