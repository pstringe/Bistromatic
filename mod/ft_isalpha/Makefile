CC = gcc
NAME = ft_isalpha
OBJS = $(NAME).o $(NAME)_test.o
SRCS = ./srcs/$(NAME).c ./srcs/$(NAME)_test.c
CFLAGS = -c -Wall -Werror -Wextra $(SRCS)
OFLAGS = -o $(OBJS)

$(NAME) : $(SRCS)
	$(CC) $(CFLAGS)
	$(CC) $(OFLAGS)

clean :
	rm $(OBJS)

fclean :
	rm $(OBJS) $(NAME)
