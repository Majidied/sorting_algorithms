# Makefile for your project

CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99

SRC = main.c print_array.c print_list.c 0-bubble_sort.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = my_program

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)
