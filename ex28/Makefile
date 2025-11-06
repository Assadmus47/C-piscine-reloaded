NAME =  ft_display_file
CC = cc
SRC = main.c
OBJ = main.o
CFLAGS = -Wall -Wextra -Weroor

all: $(NAME)

$(NAME): $(OBJ)
	cc $(OBJ) -o $(NAME)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all