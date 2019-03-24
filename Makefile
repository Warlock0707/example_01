all:
	g++ -std=c++17 -Wall -Wextra main.cpp -o main

clean:
	${RM} main
