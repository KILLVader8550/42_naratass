NAME = libget_next_line.a
MAIN = main

SRC = get_next_line.c
OBJS = ${SRC:.c=.o}

# Compile and flags
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
RM = rm -f

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

# Library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Program
$(MAIN): main.o $(NAME)
	$(CC) $(FLAGS) -o $(MAIN) main.o -L. -lget_next_line

all: $(MAIN) $(NAME)

clean:
	$(RM) $(OBJS) main.o

fclean: clean
	$(RM) $(NAME) $(MAIN)

re: fclean all

.PHONY: all clean fclean re