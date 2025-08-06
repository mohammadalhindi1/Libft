NAME = libft.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

SRCS = calloc.c ft_atoi.c \
	   memset.c memmove.c memcmp.c \
	   memcpy.c memchr.c isascii.c \
	   strrchr.c strnstr.c strchr.c \
	   isalnum.c ft_strncmp.c ft_strlcpy.c \
	   ft_str_is_alpha.c ft_bzero.c ft_strlen.c \
	   ft_strlcut.c ft_strdup.c ft_str_is_upprtcase.c \
	   ft_str_is_numeric.c ft_str_is_lowercase.c ft_str_is_printble.c \

OBJS = $(SRCS:.c=.o)

${NAME}: ${OBJS}
$(CC) $(CFLAGS) -c ${SRCS}
	
all: ${NAME}
	
clean:
	$(RM) ${OBJS}

fclean: clean
	$(RM) ${NAME}

re: fclean all