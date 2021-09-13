include paths.mk
PROJE_NAME = libft.a


CC ?= gcc
CFLAGS = -Wall -Wextra -Werror
TEST = ./src/string
DIR_INCLUDE = ./include
DIR_SRC		= ./src
DIR_BIN		= ./bin

all: lib

%.o: ./src/string/%.c
	gcc -c $< -I $(DIR_INCLUDE) $(CFLAGS) -o ./bin/$@

lib: ft_strlen.o \
	ft_strlcat.o



#%.o: ./src/string/%.c $(DIR_INCLUDE)/%.h
#	echo "sadasd"
# Receita:
# Mapear a pasta src
#	Pegar cada arquivo
# Mapear a pasta include (pra adicionar o header na compilação dos abstratos)
# Compilar como tipo abstrato de dados todos os arquivos .c com o include mapeado


#src: arquivos-objeto (tipo abstrato de dado, nao executável por nao ter um main)
#include: headers
# gcc -c ./src/ -I ./include -o obj/COMPILADINHO
#				  |___ define o diretório onde está o header



#compilei um arquivo objeto (tipo abstrato de dado, ou seja, sem main) assim:
# gcc -c string/ft_strlen.c -o COMPILADINHO.out
# mas n"ao dá pra fazer com multiplos arquivos

#ESPECIFICANDO PATH
# a flag -I especifica o path onde está o header
# no include coloco todo os arquivos de cabeçalho (todas as especificações dos tipos abstratos de dados)
# gcc -c float_vector.c -o obj/float_vector.o

#all: $(PROJ_NAME)
#clear && gcc ft_memmove.c -Wall -Wextra -Werror -fsanitize=address  && ./a.out
# all: build

# clean:
# 	echo "Removing older versions"
# 	rm -rf ./bin

# build: clean
# 	echo "Recompile..."
# 	mkdir bin

# build_tests:
# 	echo "Building test suite"
# 	rm -rf bin/test
# 	gcc -c 

# test:
	
# $(NAME): $(CFILES)
# 	$(CC) -c $(CFLAGS) -o $@ $^

# %.o: %.c
# 	gcc -c $(CFLAGS) -o ./bin/$(FILES)


# LDFLAGS ?=


# $(NAME): $(FILES)
# 	$(CC) $(LDFLAGS) -o $@ $^


# compile: ft_isalpha.c main.c
# 	gcc -o $@ &^

# %.o: bin/%.c
# 	gcc -c -Wall -Wextra -Werror -o $@ &^