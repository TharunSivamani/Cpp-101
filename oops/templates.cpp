#include <iostream> // library or header files
using namespace std;

/*

C++ Templates
Templates let you write a function or class that works with different data types.

They help avoid repeating code and make programs more flexible.

You can create a function template by using the template keyword:

Syntax
template <typename T>
return_type function_name(T parameter) {
  // code
}


*/

template <typename T>
T add(T a, T b){
    return a + b;
}

template <typename T>
class Box{
    public:
        T value;
        Box(T v){
            value = v;
        }

        Box(){
            value = (T)-100;
        }

        void show(){
            cout << value << endl;
        }
};

template <typename T1, typename T2>
class Pair{
    public:
        T1 aa;
        T2 bb;
        Pair(T1 a, T2 b){
            aa = a;
            bb = b;
        }

        void display(){
            cout << aa << " " << bb << endl;
        }
};

int main()
{

    cout << add<int>(10, 5) << endl;
    cout << add<double>(10.09876, 5) << endl;

    Box<int> box1(50);
    box1.show();

    Box<string> box2("Hi");
    box2.show();

    Box<double> box3;
    box3.show();
    box3.value=50.0987654;
    box3.show();

    Pair<string, int> p1("John", 10);
    p1.display();
    Pair<string, int> p2("Mary", 80);
    p2.display();

    return 0;
}

/*
g++ main.cpp -o main
./main
*/