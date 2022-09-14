# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 10:16:31 by maareval          #+#    #+#              #
#    Updated: 2022/05/15 09:31:34 by maareval         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Indicamos el nombre de nuestro ejecutable
NAME = libft.a

#Declaramos la variable con los archivos que van a componer nuestro ejecutable. El \ indica fin de linea
SOURCES = 	ft_isalpha.c 	\
			ft_isdigit.c 	\
			ft_isalnum.c 	\
			ft_isascii.c 	\
			ft_isprint.c 	\
			ft_strlen.c 	\
			ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memmove.c 	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strnstr.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_atoi.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

#Declaramos la variable con los archivos que componen el bonus
SOURCES_BON =	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstlast.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\

#Declaramos variable para decir cuales van a ser nuestros archivos objeto, los .c y los .o
OBJECTS = $(SOURCES:.c=.o)

OBJECTS_BON = $(SOURCES_BON:.c=.o) 

#Indicamos cual va a ser nuetro compilador
CC = gcc

#Declaramos nuestros flags
CFLAGS = -Wall -Wextra -Werror

#Declaramos variable para el comando clean
RM = rm -f

#Funcion principal
all: $(NAME)

#Se compila la libreria
$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

#Se compila el bonus
bonus: all $(OBJECTS_BON)
		ar rcs $(NAME) $(OBJECTS_BON)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Borrado de objetos
clean:
	$(RM) $(OBJECTS) $(OBJECTS_BON)

#Borrado de objetos y del ejecutable
fclean: clean
	$(RM) $(NAME)

#Lo borra todo
re: fclean all bonus

#Indicamos que no cree ningun archivo con estos nombres
.PHONY: bonus all clean fclean re