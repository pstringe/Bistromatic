CC = gcc
NAME = ft_isalpha
TEST = $(NAME)_test
SRD = ./srcs/
IND = ./includes/
OBJS = $(NAME).o
OBJT = $(OBJS) $(TEST).o
SRCS = $(SRD)$(NAME).c
SRCT = $(SRCS) $(SRD)$(TEST).c
CFLAGS = -I$(IND) -Wall -Werror -Wextra -c
COMPILE = $(CC) $(CFLAGS)
LINK = $(CC) -o

$(NAME).o : $(SRCS) $(IND)$(NAME).h
	$(COMPILE) $(SRD)$(NAME).c

$(TEST).o : $(SRCT) $(IND)$(TEST).h
	$(COMPILE) $(SRD)$(TEST).c

test : $(OBJT)
	$(LINK) $(TEST) $(OBJT)

clean :
	rm -f $(OBJT)

fclean :
	make clean;
	rm -f $(TEST)

re :
	make fclean;
	make
