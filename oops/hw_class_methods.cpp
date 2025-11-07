#include <iostream> // library or header files
using namespace std;

/*

Challenge Task
Create a class Dog with a method bark() that prints "Woof!".

Then call that method from main() using an object of the class.

*/

class Dog{
    public:
        void bark();
};

void Dog::bark(){
    cout << "BARK...!";
}

int main()
{

    Dog obj;
    obj.bark();

    return 0;
}

/*
g++ main.cpp -o main
./main
*/