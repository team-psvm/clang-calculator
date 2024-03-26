CC = gcc
SRC = main.c fun.impl.c
OBJ = $(SRC:.c=.o)
EXEC = main

$(EXEC): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(EXEC)