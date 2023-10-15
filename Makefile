####
NAME = ft_printf.a
SRCS = ft_printf.c put_char.c put_str.c put_hexa.c put_adress.c put_nbr.c 
OBJS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror
CC = cc
COMPILER = $(CC) $(FLAGS)
RM = rm -f
HEADER = printf.h
####
all: $(NAME)

%.o : %.c
	$(COMPILER) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re
