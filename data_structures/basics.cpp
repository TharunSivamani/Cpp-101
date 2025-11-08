#include <iostream> // library or header files
using namespace std;

/*

Data Structures
Data structures are used to store and organize data. An array is an example of a data structure, which allows multiple elements to be stored in a single variable.

C++ includes many other data structures as well, each is used to handle data in different ways.

These are part of the C++ STL, which stands for The Standard Template Library.

// Include the vector library
#include <vector>

// Include the list library
#include <list>

// Include the set library
#include <set>

// Include the map library
#include <map>

// Include the stack library
#include <stack>

// Include the queue library
#include <queue>

Key Concepts of the STL
The key components of the STL consist of containers, iterators, and algorithms, and the relationship between them:

Containers are data structures that provides a way to store data, like vectors, lists, etc.
Iterators are objects used to access elements of a data structure.
Algorithms include functions, like sort() and find(), that perform operations on data structures through iterators.

*/

#include <vector>

int main()
{

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for(string s: cars){
        cout << s << endl;
    }

    return 0;
}

/*
g++ main.cpp -o main
./main
*/