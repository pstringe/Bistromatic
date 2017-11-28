CC = gcc
MOD	= ./mod/
NAME = libft.a
ISALPHA = $(MOD)ft_isalpha/ft_isalpha.o
OBJS = $(ISALPHA)
TESTD = ./tests/
TEST = ft_is_alpha_test
CFLAGS = $(CC) -c -Wall -Werror -Wextra
OFLAGS = $(CC) $(TESTD)$(TEST).o -L. -lft -o $(TEST) 

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS):
	+$(MAKE) -C $(MOD)ft_isalpha/

test : $(TESTD)$(TEST).c
	$(CFLAGS) $(TESTD)$(TEST).c
	$(OFLAGS)

clean : 
	find . -name '*.o' -delete

fclean :
	make clean;
	rm -f $(NAME)

re :
	make fclean;
	make

