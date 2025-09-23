NAME = get_next_line.a

SRC = get_next_line.c main.c
OBJS = ${SRCS:.c=.o}


# Compiler and flag
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
RM = rm -f

%.o:%.c
	${CC} ${FLAGS} ${INCLUDE} -c $< -o $@

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: $(NAME)

clean:
	$(RM) -f $(OUT)

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean rel