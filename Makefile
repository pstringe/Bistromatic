CC = gcc
NAME = libft.a
SRCS = ft_isalpha.c
IND = ./includes/
OBJS := $(patsubst %.c, %.o, $(SRCS))
TESTD = ./tests/
TEST = ft_isalpha_test
CFLAGS = -c -Wall -Werror -Wextra
OFLAGS = $(TEST).o -L. -lft -o $(TEST) 

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)
	
test : $(TESTD)$(TEST).o
	$(CC) $(OFLAGS)

$(TESTD)$(TEST).o : $(TESTD)$(TEST).c
	$(CC) $(CFLAGS) $(TESTD)$(TEST).c

clean : 
	rm -f *.o

fclean :
	make clean;
	rm -f $(NAME)

re :
	make fclean;
	make

