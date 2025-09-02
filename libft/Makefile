NAME = libft.a

# file name
PART1 = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c

PART2 = ft_strjoin.c ft_strtrim.c ft_split.c

# Source and Object file
SRCS = ${PART1} ${PART2}
OBJS = ${SRCS:.c=.o}

# Compiler and flag
CC = gcc
FlAGS = -Wall -Wextra -Werror
INClUDE = -INClUDE
RM = rm -f

# Compile each .c into .o
# "$<" -> first dependency "$@" -> Target
.o:.c
	${CC} ${FLAGS} ${INLCLUDE} -c $< -o $@ 

# Build rule
$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re