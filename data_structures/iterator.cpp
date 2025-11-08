#include <iostream> // library or header files
using namespace std;

/*

C++ Iterators
Iterators are used to access and iterate through elements of data structures (vectors, sets, etc.), by "pointing" to them.

It is called an "iterator" because "iterating" is the technical term for looping.

begin() points to the first element in the vector (index 0, which is "Volvo"):

Example
// Point to the first element in the vector
it = cars.begin();


End Example
end() points to one position after the last element in the vector (meaning it doesn't point to an actual element, but rather indicates that this is the end of the vector).

So, to use end() to point to the last element in the cars vector (Mazda), you can use cars.end() - 1:

Example
// Point to the last element
it = cars.end() - 1;


Iterate in Reverse
To iterate in reverse order, you can use rbegin() and rend() instead of begin() and end():

Example
// Iterate in reverse order
for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
  cout << *it << "\n";
}


Iterate Through other Data Structures
Iterators are great for code reusability since you can use the same syntax for iterating through vectors, lists, deques, sets and maps:

List Example
// Create a list called cars that will store strings
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Loop through the list with an iterator
for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}


Deque Example
// Create a deque called cars that will store strings
deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Loop through the deque with an iterator
for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}


Set Example
// Create a set called cars that will store strings
set<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Loop through the set with an iterator
for (auto it = cars.begin(); it != cars.end(); ++it) {
  cout << *it << "\n";
}


Map Example
// Create a map that will store strings and integers
map<string, int> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

// Loop through the map with an iterator
for (auto it = people.begin(); it != people.end(); ++it) {
  cout << it->first << " is: " << it->second << "\n";
}

*/

#include <string>
#include <vector>

int main()
{

    // vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // // Create a vector iterator called it
    // vector<string>::iterator it;

    // // Point to the first element in the vector
    // it = cars.begin();

    // // Modify the value of the first element
    // *it = "Tesla";

    // // Volvo is now Tesla

    // // Loop through the vector with the iterator
    // for (it = cars.begin(); it != cars.end(); ++it){
    //     cout << *it << "\n";
    // }

    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Loop through vector elements
    for (auto it = cars.begin(); it != cars.end();)
    {
        if (*it == "BMW")
        {
            it = cars.erase(it); // Remove the BMW element
        }
        else
        {
            ++it;
        }
    }

    // Print vector elements
    for (const string &car : cars)
    {
        cout << car << "\n";
    }

    return 0;
}

/*
g++ main.cpp -o main
./main
*/