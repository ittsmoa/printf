CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

NAME = libftprintf.a

SRCS = ft_hexa.c ft_unsi.c ft_printf.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_ptr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re