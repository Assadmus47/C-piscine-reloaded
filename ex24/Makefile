
TARGET = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I includes/libft.h

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJ = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

all = $(TARGET)

$(TARGET): $(OBJ)
	cc -o $(TARGET) $(OBJ)

%.o: %.c
	cc -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

