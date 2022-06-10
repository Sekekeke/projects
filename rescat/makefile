all: game

game: main.o game.o
	g++ main.o game.o -lpdcurses -o game

main.o: main.cpp
	g++ -c main.cpp

game.o: game.cpp
	g++ -c game.cpp