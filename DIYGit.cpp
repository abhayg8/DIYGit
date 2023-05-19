// DIYGit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "CLI11.hpp"

using namespace std;

void print_help();

int main(int argc, char* argv[])
{
    std::cout << "Hello World!\n";

    /*
    * Things to do:
    * - Some kind of switch statement for commands 
    * - Figure out checking for buffer overflows and the correct number of arguments
    */

    if (argc < 2)
    {
        print_help();
    }
    else
    {
        string command = argv[1];
    }


    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

//Simple helper function to print the help menu
//TODO: Needs to be completed with full set of instructions. 
void print_help()
{
    std::cout << "DIY Git Usage Instructions" << std::endl;
}
