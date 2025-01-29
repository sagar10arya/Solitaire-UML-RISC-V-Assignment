CC = g++
CFLAGS = -std=c++17 -Wall
SRC = src/card.cpp src/deck.cpp src/main.cpp
TESTS = tests/test_card.cpp

all: build

build:
	$(CC) $(SRC) -o solitaire.exe $(CFLAGS)

test:
	$(CC) $(TESTS) -o test.exe $(CFLAGS)
	./test.exe

clean:
	del *.exe
