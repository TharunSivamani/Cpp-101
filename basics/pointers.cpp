#include <iostream> // library or header files
using namespace std;

/*

Creating Pointers
You learned from the previous chapter, that we can get the memory address of a variable by using the & operator:

A pointer however, is a variable that stores the memory address as its value.

A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

Example
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";


C++ Dereference

However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):


C++ Modify Pointers

Modify the Pointer Value
You can also change the pointer's value. But note that this will also change the value of the original variable:




*/

int main()
{

    // string food = "Coke";
    // string* ptr = &food;

    // // cout << &food << endl;
    // // cout << ptr << endl;
    
    // cout << ptr << endl;
    // cout << *ptr << endl;

    // Modify

    string food = "Pizza";
    string* ptr = &food;

    cout << "Before modification: " << endl;
    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = "Hamburger";

    cout << "After modification: " << endl;
    cout << food << endl;
    cout << &food << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/