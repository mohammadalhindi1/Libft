NAME = libft.a
CC = cc
#C compiler
RM = rm -f
# لحذف الملفات
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_calloc.c ft_atoi.c \
       ft_memset.c ft_memmove.c ft_memcmp.c \
       ft_memcpy.c ft_memchr.c ft_isascii.c \
       ft_strrchr.c ft_strnstr.c ft_strchr.c \
       ft_isalnum.c ft_strncmp.c ft_strlcpy.c \
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
