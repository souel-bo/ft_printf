CC = cc
FLAGS = -Wall -Werror -Werror
NAME =  libftprintf.a
RM = rm -rf
AR = ar rcs
SOURCE = ft_print_ptr.c ft_printf.c ft_putchar.c ft_puthex.c\
		 ft_putnbr.c ft_putstr.c ft_unsigned.c 

OBJECT = $(SOURCE:.c=.o) 

.PHONY: all clean fclean re

all: $(NAME)

$(NAME) : $(OBJECT) $(LIBFT_MAKE)
	@$(AR) $@ $^

%.o : %.c
	@$(CC) $(FLAGS) -c $< -o $@ 

clean :
	@$(RM) $(OBJECT)

fclean : clean
	@$(RM) $(NAME)

re : fclean all