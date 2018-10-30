main: Roman_to_Arabic.cpp Roman_to_Arabic.hpp Roman_to_Arabic_Main.cpp
	g++ Roman_to_Arabic.cpp Roman_to_Arabic_Main.cpp -o main	

test: Roman_to_Arabic.cpp Roman_to_Arabic.hpp Roman_to_Arabic_Test.cpp
	g++ Roman_to_Arabic.cpp Roman_to_Arabic_Test.cpp -lgtest -lpthread -o test
