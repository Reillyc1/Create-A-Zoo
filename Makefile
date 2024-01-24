all: main

# main is made by linking object files together
main: Animal.o Lion.o Penguin.o Turtle.o Zoo.o main.o
	g++ Zoo.o Animal.o Lion.o Penguin.o Turtle.o main.o -o main

# the Zoo.o object file needs recompiled if Zoo.cpp or Zoo.h changes
Zoo.o: Zoo.cpp Zoo.h
	g++ -c Zoo.cpp -o Zoo.o

Animal.o: Animal.cpp Animal.h
	g++ -c Animal.cpp -o Animal.o

Lion.o: Lion.cpp Lion.h
	g++ -c Lion.cpp -o Lion.o

Penguin.o: Penguin.cpp Penguin.h
	g++ -c Penguin.cpp -o Penguin.o

Turtle.o: Turtle.cpp Turtle.h
	g++ -c Turtle.cpp -o Turtle.o

# the main.o object file needs recompiled if main.cpp changes
main.o: main.cpp Animal.cpp
	g++ -c main.cpp -o main.o