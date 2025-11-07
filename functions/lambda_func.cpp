#include <iostream> // library or header files
#include <functional>
using namespace std;

/*

Lambda Functions
A lambda function is a small, anonymous function you can write directly in your code. It's useful when you need a quick function without naming it or declaring it separately.

Think of it as a "mini function on the fly."

Syntax
[capture] (parameters) { code };

*/

void myFunction(function<void()> func){
    func();
    func();
}

int main()
{
    auto message = []() {
        cout << "Hello World!." << endl;
    };

    message();

    auto add = [](int a, int b){
        return a+b;
    };

    cout << add(10, 15) << endl;

    myFunction(message); // prints 2 times
    myFunction(message); // prints 2 times

    return 0;
}

/*
g++ main.cpp -o main
./main
*/