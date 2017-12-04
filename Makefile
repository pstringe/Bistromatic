CC = gcc
NAME = libft.a
SRCS = *.c
IND = ./includes/
OBJS := $(patsubst %.c, %.o, $(SRCS))
CFLAGS = -c -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean : 
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all

debug:
	gcc -Wextra -Wall -Werror $(SRCS) test.c -v -g -o test
