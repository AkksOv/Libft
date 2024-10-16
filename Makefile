# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Liste des fichiers sources
SRC = ft_strlen.c \
      ft_isprint.c \
      ft_isdigit.c \
      ft_isalnum.c \
      ft_isalpha.c \
      ft_isascii.c \
      ft_memcpy.c \
      ft_memmove.c \
      ft_memset.c \
      ft_strlcat.c \
      ft_strlcpy.c \
      ft_tolower.c \
      ft_toupper.c \
      ft_strchr.c \
      ft_memchr.c \
      ft_strncmp.c \
      ft_memchr.c \
      ft_memcmp.c \
      ft_strnstr.c \
      ft_atoi.c \
      ft_calloc.c \
      ft_strdup.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
      ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_itoa.c \
	ft_substr.c \
	ft_strtrim.c \
      ft_striteri.c \
      ft_strmapi.c \
      ft_strjoin.c \
      ft_split.c \

OBJ = $(SRC:.c=.o)
DEPS = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created!"


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


-include $(DEPS)

clean:
	@rm -f $(OBJ) $(DEPS)
	@echo "Object files and dependencies removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re