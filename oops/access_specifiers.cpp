#include <iostream> // library or header files
using namespace std;

/*

In C++, there are three access specifiers:

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.


Note: By default, all members of a class are private if you don't specify an access specifier:


*/

class MyClass{
    public:
        int x;
    private:
        int y;
};

int main()
{
    MyClass myObj;

    myObj.x = 25;
    // myObj.y = 25; // not allowed
    

    return 0;
}

/*
g++ main.cpp -o main
./main
*/