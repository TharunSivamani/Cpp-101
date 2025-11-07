#include <iostream> // library or header files
using namespace std;

/*

Capture Clause []
You can use the [ ] brackets to give a lambda access to variables outside of it.

This is called the capture clause.

In this example, the lambda captures the variable x by value (a copy):

------

Capture by Reference
If you want the lambda to use the latest value of a variable (not just a copy), you can use [&] to capture it by reference.

This means the lambda will work with the original variable, not a separate copy:

int main() {
  int x = 10;

  auto show = [&x]() {
    cout << x;
  };

  x = 20;  // Change x after the lambda is created

  show();
  return 0;
}
Result:

20

*/

int main()
{

    // int x=10;
    // auto show = [x](){
    //     cout << x;
    // };

    // show();

    int x = 10;
    auto show = [&x](){
        cout << x;
    };


    x = 20;
    show();

    return 0;
}

/*
g++ main.cpp -o main
./main
*/