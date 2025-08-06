NAME = libft.a
CC = cc
#C compiler
RM = rm -f
# لحذف الملفات
CFLAGS = -Wall -Wextra -Werror

SRCS = calloc.c ft_atoi.c \
       memset.c memmove.c memcmp.c \
       memcpy.c memchr.c isascii.c \
       strrchr.c strnstr.c strchr.c \
       isalnum.c ft_strncmp.c ft_strlcpy.c \
       ft_str_is_alpha.c ft_bzero.c ft_strlen.c \
       ft_strlcat.c ft_strdup.c ft_str_is_uppercase.c \
       ft_str_is_numeric.c ft_str_is_lowercase.c ft_str_is_printable.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

# ar rcs: Command to create a static library
# r: Insert files into the archive.
# c: Create the archive if it doesn't exist
# s: Write an index (for faster linking)