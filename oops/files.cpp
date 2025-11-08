#include <iostream> // library or header files
#include <fstream>
#include <string>
using namespace std;

/*

C++ Files
The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:

Example
#include <iostream>
#include <fstream>


There are three classes included in the fstream library, which are used to create, write or read files:

Class	Description
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	A combination of ofstream and ifstream: creates, reads, and writes to files


Read a File
To read from a file, use either the ifstream or fstream class, and the name of the file.

Note that we also use a while loop together with the getline() function (which belongs to the ifstream class) to read the file line by line, and to print the content of the file:

*/

int main()
{

    // ofstream MyFile("filename.txt");

    // MyFile << "Files are tricky to handle.....";

    // MyFile.close();

    // string MyText;

    // ifstream MyReadFile("filename.txt");

    // while(getline (MyReadFile, MyText)) {
    //     cout << MyText;
    // }

    // MyReadFile.close();
}

/*
g++ main.cpp -o main
./main
*/