# Nom de l'exécutable final
EXEC = lib_ft

# Liste des fichiers sources
SRC = main.c fonction1.c fonction2.c

# Fichiers objets correspondants
OBJ = $(SRC:.c=.o)

# Fichiers header
DEPS = libft.h

# Options de compilation (par exemple, utiliser -Wall pour les avertissements)
CFLAGS = -Wall -Wextra -g

# Compilateur utilisé
CC = gcc

# Règle principale : compiler les fichiers objets et générer l'exécutable
$(EXEC): $(OBJ)
	$(CC) -o $@ $^

# Règle pour compiler les fichiers .c en .o en incluant les dépendances
%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyer les fichiers objets et l'exécutable généré
clean:
	rm -f $(OBJ) $(EXEC)

# Cible pour relancer la compilation complète
rebuild: clean $(EXEC)
