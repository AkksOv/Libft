# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = gcc
CFLAGS = -Wall -Wextra -Werror -MMD

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
      ft_strdup.c

# Fichiers objets et fichiers de dépendances
OBJ = $(SRC:.c=.o)
DEPS = $(OBJ:.o=.d)

# Règle pour construire la bibliothèque
all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created!"

# Règle pour compiler les fichiers .c en fichiers .o et générer les fichiers .d
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Inclure les fichiers de dépendances générés automatiquement
-include $(DEPS)

# Règle pour nettoyer les fichiers objets, de dépendance, et la bibliothèque
clean:
	@rm -f $(OBJ) $(DEPS)
	@echo "Object files and dependencies removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed!"

# Règle pour tout recompiler
re: fclean all

.PHONY: all clean fclean re