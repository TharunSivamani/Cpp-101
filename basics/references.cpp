#include <iostream> // library or header files
using namespace std;

/*
Creating References
A reference variable is an alias for an existing variable. It is created using the & operator:

string food = "Pizza";  // food variable
string &meal = food;    // reference to food

Updating Through References
If you change the value of a reference variable, the original variable will also change (and vice versa), because they both refer to the same memory location:

*/

int main()
{

    string food = "Pizza";
    string &meal = food;

    // cout << food << "\n"; // Outputs Pizza
    // cout << meal << "\n";

    meal = "Burger";

    cout << food << "\n";
    cout << meal << "\n";

    return 0;
}

/*
g++ main.cpp -o main
./main
*/