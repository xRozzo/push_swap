##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC 	=   my/utils/my_putchar.c \
		my/utils/is_float.c \
		my/utils/my_put_nbr.c \
		my/utils/my_putstr.c \
		my/utils/my_revstr.c \
		my/utils/my_strcat.c \
		my/utils/my_strcpy.c \
		my/utils/my_str_isalpha.c \
		my/utils/my_strlen.c \
		my/utils/my_strncat.c \
		my/utils/my_int_to_str.c \
		my/utils/my_long_to_str.c \
		my/utils/my_strdup.c \
		my/utils/my_uint_to_str.c \
		my/utils/my_ulong_long_to_str.c \
		my/utils/is_only_num.c \
		my/utils/is_num.c \
		my/utils/str_split.c \
		my/utils/my_strcmp.c \
		my/utils/check_if_file.c \
		my/utils/print_file_path.c \
		my/utils/calls_read_directory.c \
		my/utils/return_nums.c \
		my/utils/index_conditions.c \
		my/utils/void_push_down.c \
		my/utils/rotate_until_lower \
		my/utils/push_b.c \
		my/utils/push_a.c








NAME	=	libmy.a

OBJ	=	 $(SRC:.c=.o)

CFLAGS = -I./my/utils -g3

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean all
