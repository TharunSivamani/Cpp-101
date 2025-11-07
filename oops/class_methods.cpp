#include <iostream> // library or header files
using namespace std;

/*

Define a Method Outside the Class
Sometimes it is better to declare the method in the class and define it later (especially in large programs).

This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:

Parameters
You can also pass values to methods just like regular functions:

*/

class MyClass{
    public:
        void myMethod(){
            cout << "MyClass myMethod() called." << endl;
        };
        void outMethod();
        int maxSpeed(int speed);
};

void MyClass::outMethod(){
    cout << "Method declared outside the class called..." << endl;
};

int MyClass::maxSpeed(int speed){
    return speed;
}


int main()
{

    MyClass myObj;
    myObj.myMethod();
    myObj.outMethod();
    cout << "Max Speed: " << myObj.maxSpeed(100) << endl;

    return 0;
}

/*
g++ main.cpp -o main
./main
*/