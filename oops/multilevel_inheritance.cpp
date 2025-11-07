#include <iostream> // library or header files
using namespace std;

/*

Multilevel Inheritance
A class can also be derived from one class, which is already derived from another class.

In the following example, MyGrandChild is derived from class MyChild (which is derived from MyClass).

*/

class MyClass{
    public:
        void myFunction(){
            cout << "Some content in parent class." << endl;
        }
};

class MyChild: public MyClass{
};

class MyGrandChild : public MyChild{
};

int main()
{

    MyGrandChild myObj;
    myObj.myFunction();

    return 0;
}

/*
g++ main.cpp -o main
./main
*/