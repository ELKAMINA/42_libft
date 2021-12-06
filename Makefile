CC = gcc
EXEC = libft.a
SRC = $(wildcard *.c)
OBJ = $(SRC: .c=.o)
CFLAGS += -Wall -Werror -Wextra

all : $(EXEC)

%.o : %.c
	$(CC) -o $@ -c $<

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^

clean : clean
	rm -rf $(OBJ)

fclean: clean
        rm -f $(OBJ)

re:     fclean all