
NAME = libft.a
CFILES := ft_isalpha.c main.c
CFLAGS ?= -Wall -Wextra -Werror
CC ?= clang
LDFLAGS ?=

include paths.mk

#clear && gcc ft_memmove.c -Wall -Wextra -Werror -fsanitize=address  && ./a.out
all: build

clean:
	echo "Removing older versions"
	rm -rf ./bin

build: clean
	echo "Recompile..."
	mkdir bin

build_tests:
	echo "Building test suite"
	rm -rf bin/test
	gcc -c 

test:
	
$(NAME): $(CFILES)
	$(CC) -c $(CFLAGS) -o $@ $^

%.o: %.c
	gcc -c $(CFLAGS) -o ./bin/$(FILES)


# LDFLAGS ?=


# $(NAME): $(FILES)
# 	$(CC) $(LDFLAGS) -o $@ $^


# compile: ft_isalpha.c main.c
# 	gcc -o $@ &^

# %.o: bin/%.c
# 	gcc -c -Wall -Wextra -Werror -o $@ &^