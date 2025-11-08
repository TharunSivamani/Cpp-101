#include <iostream> // library or header files
using namespace std;

/*

C++ Set
A set stores unique elements where they:

Are sorted automatically in ascending order.
Are unique, meaning equal or duplicate values are ignored.
Can be added or removed, but the value of an existing element cannot be changed.
Cannot be accessed by index numbers, because the order is based on sorting and not indexing.


Methods:

insert()
erase()
clear()
size()
empty()

Sort a Set in Descending Order
By default, the elements in a set are sorted in ascending order. If you want to reverse the order, you can use the greater<type> functor inside the angle brackets, like this:

Example
// Sort elements in a set in descending order
set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
// Print the elements
for (int num : numbers) {
  cout << num << "\n";
}


*/

#include <set>

int main()
{

    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print set elements
    for (string car : cars){
        cout << car << "\n";
    }

    return 0;
}

/*
g++ main.cpp -o main
./main
*/