#include <iostream> // library or header files
using namespace std;

/*

Note: If a user-defined function, such as myFunction() is declared after the main() function, an error will occur:

Syntax:
void myFunction(){
    // code here
}


Note:

However, it is possible to separate the declaration and the definition of the function - for code optimization.

You will often see C++ programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:

Example
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}

*/

void helloFunction();

int main(){

    helloFunction();

    return 0;
}

void helloFunction(){
    cout << "HELLO :)";
}

/*
g++ main.cpp -o main
./main
*/