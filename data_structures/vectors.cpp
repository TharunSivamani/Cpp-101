#include <iostream> // library or header files
using namespace std;

/*

C++ Vector
A vector in C++ is like a resizable array.

Both vectors and arrays are data structures used to store multiple elements of the same data type.

The difference between an array and a vector, is that the size of an array cannot be modified (you cannot add or remove elements from an array). A vector however, can grow or shrink in size as needed.


Methods available are:

front()
back()
erase()
at(int: index)
push_back()
pop_back()
size()
empty()

Note: Elements are usually only added and removed from the end of the vector. If you need to add or remove elements from both ends, it is often better to use a deque instead of a vector.

*/

#include <vector>

int main()
{

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(2) << endl;

    // cars.at(4) = "Tesla"; // i cant do this
    cars.push_back("Tesla");

    for(string s: cars){
        cout << s << endl;
    };

    return 0;
}

/*
g++ main.cpp -o main
./main
*/