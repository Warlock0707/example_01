/*
This programs "spits" out any text file contents on the console, and you can additionally specifiy 
a delay between each characters. 

~$ ./main main.cpp 50 // delay in millseconds
*/

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<thread>
#include<chrono>

int main(int argc, char** argv)
{
    if(argc != 3) {
        std::cout << "Error: Requires atleast two arguments.\n";
        exit(-1);
    }

    std::fstream input;
    input.open(argv[1], std::ios::in);
    if(!input) {
        std::cout << "Error: Can't find the file.\n";
        exit(-1);
    }

    int mill = atoi(argv[2]);

    while(!input.eof()) {
        std::string text;
        std::getline(input, text);
        for(auto start = text.begin(); start != text.end(); ++start) {
            std::cout << *start;
            fflush(stdout);
            std::this_thread::sleep_for(std::chrono::milliseconds(mill));
        }
        std::cout << "\n";
    }
    input.close();
    return 0;
}
