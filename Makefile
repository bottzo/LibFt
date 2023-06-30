NAME = libft.a
SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_strlcat.c \
	  ft_atoi.c

all: ${NAME}

${NAME}: ${SRC}
	gcc -Wall -Werror -Wextra -c ${SRC}
	ar -rc ${NAME} *.o

clean: 
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all
