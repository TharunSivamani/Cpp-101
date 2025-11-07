#include <iostream> // library or header files
using namespace std;

/*

Using Lambdas in Loops
You can define and use a lambda function inside a loop, which are great for quick actions:

*/

int main()
{

    for (auto i=0;i<5;i++){
        auto show = [i](){
            cout << i << endl;
        };

        show();
    }

    return 0;
}

/*
g++ main.cpp -o main
./main
*/