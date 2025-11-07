#include <iostream>
using namespace std;

// Declare function with default parameter here
void defaultParam(string name, string greeting = "Hello");

// Normal function declaration
void multiParams(string fname, string lname);

int add(int x, int y);

// Pass By Reference
void changeValue(int &num){
    num = 100;
}


int main()
{
    defaultParam("John");            // Uses default greeting
    defaultParam("John", "Welcome"); // Custom greeting

    multiParams("John", "Doe");
    multiParams("Loreum", "Ipsum");

    cout << add(10, 12) << endl;

    int value = 1000;
    cout << value << endl;
    changeValue(value);
    cout << value << endl;

    return 0;
}

// Define function (no need to repeat default argument here)
void defaultParam(string name, string greeting)
{
    cout << greeting << " " << name << endl;
}

void multiParams(string fname, string lname)
{
    cout << fname << " " << lname << endl;
}

int add(int x, int y)
{
    return x + y;
}