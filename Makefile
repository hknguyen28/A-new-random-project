CC = gcc
CFLAGS = -Iinclude -Wall
SRC = src/main.c src/pet.c
OUT = pixel-pet.exe

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	del $(OUT)
