SOURCE = game.hpp main.hpp gate.cpp main.cpp game.cpp menu.cpp

all:
	g++ -o sfml-app $(SOURCE) -lsfml-graphics -lsfml-window -lsfml-system
