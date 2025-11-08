#include <iostream> // library or header files
using namespace std;

/*

C++ Deque
A deque (stands for double-ended queue) however, is more flexible, as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers.

Methods:

front()
back()
at()
push_front()
push_back()
pop_front()
pop_back()
size()
empty() -> return 1 (true) if empty

*/

#include <deque>

int main()
{
    // Create a deque called cars that will store strings
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print deque elements
    for (string car : cars){
        cout << car << "\n";
    }

    return 0;
}

/*
g++ main.cpp -o main
./main
*/