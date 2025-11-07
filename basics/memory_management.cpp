#include <iostream> // library or header files
using namespace std;

/*

Memory in C++
When you create a variable in C++, the compiler automatically reserves space in memory for it.


The new Keyword
The new keyword lets you manage memory yourself.

In the example below, we create memory space for an integer using new, store the value 35 in it, and print it using a pointer:

Example
int* ptr = new int;
*ptr = 35;
cout << *ptr;

The delete Keyword
When you create something with new, it's your job to remove it when you're done.

To do that, use delete:

Example
delete ptr;


*/

int main()
{
    // int myInt;
    // float myFloat;
    // double myDouble;
    // char myChar;

    // cout << sizeof(myInt) << "\n";    // 4 bytes (typically)
    // cout << sizeof(myFloat) << "\n";  // 4 bytes
    // cout << sizeof(myDouble) << "\n"; // 8 bytes
    // cout << sizeof(myChar) << "\n";   // 1 byte


    int* ptr = new int;
    *ptr = 100;
    cout << *ptr << endl;

    delete ptr;


    return 0;
}

/*
g++ main.cpp -o main
./main
*/