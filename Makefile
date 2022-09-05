NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SOURCE = $(wildcard *.c)

OBJECT = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

comp:
	gcc ft_printf.c libftprintf.a

clean:
	$(RM) $(OBJECT)

fclean: clean
	$(RM) $(NAME)
	@echo "All Deleted..."

re: fclean all

.PHONY: clean fclean all re