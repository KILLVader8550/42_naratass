NAME = libft.a
MAIN = main

# file name

PART1 = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c

PART2 = ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c



# Source and Object file
SRCS = ${PART1} ${PART2}
OBJS = ${SRCS:.c=.o}
 
# Compiler and flag
CC = gcc
FLAGS = -Wall -Wextra -Werror
INCLUDE = -I .
RM = rm -f

# Compile each .c into .o
# "$<" -> first dependency "$@" -> Target
%.o:%.c
	${CC} ${FLAGS} ${INCLUDE} -c $< -o $@ 

# Build rule
${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

# Build main by using main.c and the library
${MAIN}: main.o ${NAME}
	${CC} ${FLAGS} -o ${MAIN} main.o -L. -lft

# Compile main file
main.o: main.c
	${CC} ${FLAGS} ${INCLUDE} -c main.c -o main.o

all: ${NAME} ${MAIN}

clean:
	${RM} ${OBJS} main.o

fclean: clean
	${RM} ${NAME} ${MAIN}

re: fclean all

.PHONY: all clean fclean re