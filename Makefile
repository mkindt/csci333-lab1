
CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic -Weffc++

all: clean hello

hello: hello.cpp
	$(CC) $(CFLAGS) -o hello hello.cpp

clean:
	rm -f hello
