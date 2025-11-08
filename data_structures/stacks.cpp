#include <iostream> // library or header files
using namespace std;

/*

C++ Stack
A stack stores multiple elements in a specific order, called LIFO.

LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack.


Methods:

push()
top()
pop()
size()
empty()


*/

#include <stack>

int main()
{

    stack<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};


    return 0;
}

/*
g++ main.cpp -o main
./main
*/