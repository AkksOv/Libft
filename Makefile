# Nom de la bibliothèque
NAME = libft.a

# Compilateur et options
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Liste des fichiers sources
SRC = ft_strlen.c \
      ft_isprint.c \
      ft_isdigit.c \
	  ft_bzero.c \
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
	  ft_strrchr.c \
      ft_memchr.c \
      ft_strncmp.c \
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
      ft_split.c

# Liste des fichiers sources bonus
BONUS_SRC = ft_lstnew.c \
            ft_lstadd_front.c \
			ft_lstlast.c \
			ft_lstsize.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
            ft_lstiter.c \
            ft_lstmap.c

# Objets pour les fichiers réguliers et bonus
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)
DEPS = $(OBJ:.o=.d)

# Cible par défaut
all: $(NAME)

# Création de la bibliothèque
$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created!"

# Compilation des fichiers bonus
bonus: $(OBJ) $(BONUS_OBJ)
	@ar rcs $(NAME) $(OBJ) $(BONUS_OBJ)
	@echo "Library $(NAME) with bonus created!"

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Inclusion des fichiers de dépendances
-include $(DEPS)

# Suppression des fichiers objets et de dépendance
clean:
	@rm -f $(OBJ) $(BONUS_OBJ) $(DEPS)
	@echo "Object files and dependencies removed!"

# Suppression complète (y compris la bibliothèque)
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed!"

# Reconstruction complète
re: fclean all

.PHONY: all clean fclean re bonus