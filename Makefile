NAME = libft.a
all: ${NAME}

${NAME}: *.c
	gcc -Wall -Werror -Wextra -c *.c
	ar -rc ${NAME} *.o

clean: 
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all
