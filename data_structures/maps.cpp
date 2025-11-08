#include <iostream> // library or header files
using namespace std;

/*

C++ Map
A map stores elements in "key/value" pairs.

Elements in a map are:

Accessible by keys (not index), and each key is unique.
Automatically sorted in ascending order by their keys.

Methods:

insert()
at()
erase()
size()
empty()


Elements in the map are sorted automatically in ascending order by their keys:

If you want to reverse the order, you can use the greater<type> functor inside the angle brackets, like this:

Example
map<string, int, greater<string>> people = { {"John", 32}, {"Adele", 45}, {"Bo", 29} };

for (auto person : people) {
  cout << person.first << " is: " << person.second << "\n";
}

*/

#include <map>

int main()
{

    map<string, int> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};

    return 0;
}

/*
g++ main.cpp -o main
./main
*/