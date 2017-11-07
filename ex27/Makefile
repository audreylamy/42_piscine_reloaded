NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c
OBJ = ft_display_file.o

$(NAME) : 
		$(CC) $(CFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)

all : $(NAME)

clean : 
		rm -f $(OBJ)

fclean : clean
		rm -f $(NAME)