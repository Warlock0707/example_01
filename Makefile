all:
	g++ -std=c++14 -Wall -Wextra main.cpp -o main

clean:
	${RM} main
