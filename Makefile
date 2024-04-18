NAME = libftprintf.a

RM = rm -f

CC = gcc

CFLAGS = -Wall -Wextra -Werror

MAKEFLAGS += --silent

SRCS = ft_charprint.c ft_hexaprint.c ft_intprint.c ft_printf.c \

OBJS = $(SRCS:.c=.o)

INCLUDE = ft_printf.h

all : $(NAME)

$(NAME) : $(OBJS) $(INCLUDE)
	@ar -rcs $(NAME) $(OBJS)
	@echo Effective compilation :D

clean :
	@$(RM) $(OBJS)
	@echo Its clean 

fclean : clean
	@$(RM) $(NAME)
	@echo Its sooo clean :o

re : fclean all